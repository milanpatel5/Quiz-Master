#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <QtGui>

#define Number_of_teams 4   // Max 9 allowed

bool pyt=true;
char team_name[Number_of_teams+2][100],c,display_text;
int count;
QAction *displayAction;
QAction *enterAction;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    FILE *f2;
    f2=fopen("../Buzzer/teams.txt","r");
    for(int i=0;i<Number_of_teams;++i)
        fscanf(f2,"%s",team_name[i]);
    fclose(f2);
    enterAction = new QAction(this);
    enterAction->setShortcut(Qt::Key_Return);
    connect(enterAction,SIGNAL(triggered()),this,SLOT(displaycounter()));
    addAction(enterAction);

    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    ui->setupUi(this);

    py.start();
    QThread::msleep(100);
    buz.start();
    ui->textarea->setText(team_name[0]);
    ui->textarea->setAlignment(Qt::AlignCenter);
    qApp->processEvents();
    ui->Counter->setText(team_name[0]);
    ui->Counter->setAlignment(Qt::AlignCenter);
    qApp->processEvents();
    displayAction = new QAction(this);
    connect(displayAction,SIGNAL(triggered()),this,SLOT(displaytext()));
}

void MainWindow::displaycounter()
{
    QString tmp;
    tmp = ui->timer_input->text();
    count = tmp.toInt();
    char *ch;
    ch = (char *)calloc(100,sizeof(char));
    for(;count>10;--count)
    {
        ui->Counter->setText(tmp.number(count));
        ui->Counter->setAlignment(Qt::AlignCenter);
        qApp->processEvents();
        QThread::msleep(900);
    }
    for(;count>0;--count)
    {
        tmp.clear();
        ui->Counter->setText(tmp.number(count));
        ui->Counter->setAlignment(Qt::AlignCenter);
        qApp->processEvents();
        tmp = tmp.number(count);
        tmp.prepend("espeak \"");
        tmp.append("\"");
        ba = tmp.toLocal8Bit();
        ch = ba.data();
        system(ch);
        QThread::msleep(600);
    }
    ui->Counter->setText("Times Up!!");
    ui->Counter->setAlignment(Qt::AlignCenter);
    system("espeak \"Times Up!\"");
}

void MainWindow::displaytext()
{
    if(c!='0')
    {
        ui->textarea->setText(team_name[c-'1'+1]);
        ui->textarea->setAlignment(Qt::AlignCenter);
        qApp->processEvents();
        system("aplay ../Buzzer/buzzersound.wav");
        QThread::sleep(4);
    }
    ui->textarea->setText(team_name[0]);
    ui->textarea->setAlignment(Qt::AlignCenter);
    qApp->processEvents();
}

void buzthread::run()
{
    if(pyt)
    {
        pyt=false;
        system("python ../Buzzer/Portreader.py build");
    }
    FILE *f1;
    char c1='0';
    displayAction = new QAction(this);
    while(1)
    {
        f1=fopen("../Buzzer/Portvalue.txt","r");
        fscanf(f1,"%c",&c);
        fclose(f1);
        if(c!=c1 && c<'9' && c>'0')
        {
            c1=c;
            qDebug() << "Team Number=" << c;
            qDebug() << "Team Name  =" << team_name[c-'1'+1];
            displayAction->trigger();
            qApp->processEvents();
            QThread::sleep(4);
        }
    }
}

buzthread::~buzthread()
{

}

MainWindow::~MainWindow()
{
    system("pkill Portreader");
    system("pkill Portreader.py");
    delete ui;
}
