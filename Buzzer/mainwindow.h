#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>

namespace Ui
{
    class MainWindow;
    class buzthread;
}

class buzthread : public QThread
{
    Q_OBJECT

public:
    ~buzthread();

public slots:
    void run();

};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    buzthread buz;
    buzthread py;
    QByteArray ba;

public slots:
    void displaytext();
    void displaycounter();
};


#endif // MAINWINDOW_H
