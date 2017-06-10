/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionf;
    QAction *actionTurn_music_off;
    QAction *actionTurn_music_on;
    QAction *actionexit;
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *startpage;
    QPushButton *start;
    QWidget *secondpage;
    QPushButton *browse;
    QPushButton *music;
    QPushButton *exit;
    QWidget *output;
    QPushButton *pushButton;
    QTextEdit *intextEdit;
    QTextEdit *outtextEdit;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menusettings;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1174, 765);
        MainWindow->setMinimumSize(QSize(1174, 765));
        actionf = new QAction(MainWindow);
        actionf->setObjectName(QStringLiteral("actionf"));
        actionTurn_music_off = new QAction(MainWindow);
        actionTurn_music_off->setObjectName(QStringLiteral("actionTurn_music_off"));
        actionTurn_music_on = new QAction(MainWindow);
        actionTurn_music_on->setObjectName(QStringLiteral("actionTurn_music_on"));
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QStringLiteral("actionexit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(1174, 725));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, -10, 1174, 741));
        stackedWidget->setMaximumSize(QSize(1174, 741));
        stackedWidget->setStyleSheet(QLatin1String("background-image: url(:/new/backgrounds/second_window.png);\n"
"border-image: url(:/new/backgrounds/second_window.png);"));
        startpage = new QWidget();
        startpage->setObjectName(QStringLiteral("startpage"));
        startpage->setStyleSheet(QStringLiteral("image: url(:/new/backgrounds/ROAD.jpg);"));
        start = new QPushButton(startpage);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(400, 620, 341, 121));
        start->setStyleSheet(QLatin1String("image: url(:/button/button.jpg);\n"
"border-image: url(:/button/button.jpg);\n"
"\n"
""));
        stackedWidget->addWidget(startpage);
        secondpage = new QWidget();
        secondpage->setObjectName(QStringLiteral("secondpage"));
        browse = new QPushButton(secondpage);
        browse->setObjectName(QStringLiteral("browse"));
        browse->setGeometry(QRect(2, 80, 261, 51));
        browse->setStyleSheet(QStringLiteral("border-image: url(:/button/browsebutton.png);"));
        music = new QPushButton(secondpage);
        music->setObjectName(QStringLiteral("music"));
        music->setGeometry(QRect(2, 147, 261, 61));
        music->setStyleSheet(QStringLiteral("border-image: url(:/button/musicbutton.png);"));
        exit = new QPushButton(secondpage);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(0, 220, 271, 61));
        exit->setStyleSheet(QLatin1String("\n"
"border-image: url(:/button/exitbutton.png);"));
        stackedWidget->addWidget(secondpage);
        output = new QWidget();
        output->setObjectName(QStringLiteral("output"));
        output->setStyleSheet(QStringLiteral("border-image: url(:/new/backgrounds/output_screen.png);"));
        pushButton = new QPushButton(output);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 680, 291, 81));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/button/outputbutton.png);"));
        intextEdit = new QTextEdit(output);
        intextEdit->setObjectName(QStringLiteral("intextEdit"));
        intextEdit->setGeometry(QRect(13, 110, 461, 541));
        intextEdit->setStyleSheet(QLatin1String("border-image: url(:/new/backgrounds/base.png);\n"
"font: 12pt \"MS Shell Dlg 2\";"));
        outtextEdit = new QTextEdit(output);
        outtextEdit->setObjectName(QStringLiteral("outtextEdit"));
        outtextEdit->setGeometry(QRect(730, 116, 451, 541));
        outtextEdit->setStyleSheet(QLatin1String("border-image: url(:/new/backgrounds/base.png);\n"
"font: 12pt \"MS Shell Dlg 2\";"));
        pushButton_2 = new QPushButton(output);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 20, 111, 81));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/button/back.png);"));
        stackedWidget->addWidget(output);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1174, 26));
        menusettings = new QMenu(menuBar);
        menusettings->setObjectName(QStringLiteral("menusettings"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menusettings->menuAction());
        menusettings->addAction(actionTurn_music_off);
        menusettings->addAction(actionTurn_music_on);
        menusettings->addAction(actionexit);

        retranslateUi(MainWindow);
        QObject::connect(actionexit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(exit, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Roads To Castle", Q_NULLPTR));
        actionf->setText(QApplication::translate("MainWindow", "Turn music off", Q_NULLPTR));
        actionTurn_music_off->setText(QApplication::translate("MainWindow", "Turn music off", Q_NULLPTR));
        actionTurn_music_on->setText(QApplication::translate("MainWindow", "Turn music on", Q_NULLPTR));
        actionexit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        start->setText(QString());
        browse->setText(QString());
        music->setText(QString());
        exit->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        menusettings->setTitle(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
