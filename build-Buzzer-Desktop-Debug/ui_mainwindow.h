/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionBuzzer;
    QAction *actionTimer;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextBrowser *textarea;
    QTextBrowser *Logo;
    QWidget *tab_2;
    QTextBrowser *Counter;
    QTextBrowser *Seconds;
    QLineEdit *timer_input;
    QTextBrowser *Logo_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(805, 597);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QPalette palette;
        MainWindow->setPalette(palette);
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        MainWindow->setAcceptDrops(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Basics/logo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("#MainWindow\n"
"{\n"
"}"));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setDocumentMode(false);
        actionBuzzer = new QAction(MainWindow);
        actionBuzzer->setObjectName(QStringLiteral("actionBuzzer"));
        actionTimer = new QAction(MainWindow);
        actionTimer->setObjectName(QStringLiteral("actionTimer"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setAutoFillBackground(true);
        centralwidget->setStyleSheet(QLatin1String("#centralwidget\n"
"{\n"
"	background-repeat : none;\n"
"	background-image : url(:/Basic/dash.png);\n"
"}"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(6, -4, 781, 611));
        tabWidget->setMaximumSize(QSize(787, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Tibetan Machine Uni"));
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QLatin1String("#tabWidget\n"
"{\n"
"	background-repeat : none;\n"
"	background-image : url(:/Basic/dash.png);\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        textarea = new QTextBrowser(tab);
        textarea->setObjectName(QStringLiteral("textarea"));
        textarea->setGeometry(QRect(-10, 250, 821, 321));
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu"));
        font1.setPointSize(100);
        font1.setBold(true);
        font1.setWeight(75);
        textarea->setFont(font1);
        textarea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textarea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textarea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        Logo = new QTextBrowser(tab);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setGeometry(QRect(-10, -10, 821, 261));
        Logo->setMaximumSize(QSize(16777215, 500));
        Logo->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Logo->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        Counter = new QTextBrowser(tab_2);
        Counter->setObjectName(QStringLiteral("Counter"));
        Counter->setGeometry(QRect(-1, 287, 811, 281));
        Counter->setFont(font1);
        Counter->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Counter->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Counter->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        Seconds = new QTextBrowser(tab_2);
        Seconds->setObjectName(QStringLiteral("Seconds"));
        Seconds->setGeometry(QRect(-5, 240, 261, 51));
        timer_input = new QLineEdit(tab_2);
        timer_input->setObjectName(QStringLiteral("timer_input"));
        timer_input->setGeometry(QRect(250, 240, 561, 51));
        QFont font2;
        font2.setPointSize(25);
        timer_input->setFont(font2);
        Logo_2 = new QTextBrowser(tab_2);
        Logo_2->setObjectName(QStringLiteral("Logo_2"));
        Logo_2->setGeometry(QRect(-10, -10, 821, 251));
        Logo_2->setMaximumSize(QSize(16777215, 500));
        Logo_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Logo_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionBuzzer->setText(QApplication::translate("MainWindow", "Buzzer", 0));
        actionTimer->setText(QApplication::translate("MainWindow", "Timer", 0));
        textarea->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:100pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:72pt;\">Ready?</span></p></body></html>", 0));
        Logo->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Basics/logo.jpg\" width=\"700\" height=\"150\" /></p>\n"
"<p align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:48pt; font-weight:496; color:#8800ff;\">SciQ</span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Buzzer", 0));
        Counter->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:100pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:72pt;\">Ready?</span></p></body></html>", 0));
        Seconds->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:600;\">Seconds: </span></p></body></html>", 0));
        Logo_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Basics/logo.jpg\" width=\"700\" height=\"150\" /></p>\n"
"<p align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:48pt; font-weight:496; color:#8800ff;\">SciQ</span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Counter", 0));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
