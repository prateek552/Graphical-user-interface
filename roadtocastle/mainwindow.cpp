#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Graph.h"
#include <QMediaPlayer>
#include <thread>
#include <QThread>
#include <QTime>
#include <QFile>
#include<string>
#include <QFileDialog>
QString filename2;QString output;
QMediaPlayer *music = new QMediaPlayer();
QMediaPlayer *music2 = new QMediaPlayer();
int timer=1;

using namespace  std;
void delay( int n)
{
    QTime dieTime= QTime::currentTime().addSecs(n);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    music->setMedia(QUrl("qrc:/Paladins - Menu Music.mp3"));
    music2->setMedia(QUrl("qrc:/23448534.mp3"));
    music->play();
    ui->setupUi(this);
    ui->mainToolBar->hide();
    ui->statusBar->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_start_clicked()
{

    ui->stackedWidget->setCurrentIndex(1);
    music->setVolume(20);
    music2->play();
    delay(2);
    music->setVolume(100);
}
/*void MainWindow::on_credits_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    wait(5);
    ui->stackedWidget->setCurrentIndex(1);
}
*/
void MainWindow::on_actionTurn_music_off_triggered()
{
    music->stop();
}


void MainWindow::on_actionTurn_music_on_triggered()
{
    music->play();
}



void MainWindow::on_browse_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this,tr("input"),"C://","Text file(*.txt)");
    filename2=filename;
      QFile file(filename);
         QString line;
         QStringList outputname=filename.split(".");
         outputname.first()=outputname.first()+"output.txt";
         output=outputname.first();
         ui->intextEdit->clear();
         if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
             QTextStream stream(&file);
             while (!stream.atEnd()){
                 line = stream.readLine();
                ui->intextEdit->setText(ui->intextEdit->toPlainText()+line+"\n");
             }
         }
     file.close();
     if(filename!="")
     ui->stackedWidget->setCurrentIndex(2);

}

void MainWindow::on_music_clicked()
{
    if(timer%2==0)
        music->play();
    else
        music->pause();
    timer++;
}

void MainWindow::on_pushButton_clicked()
{
    //call main()
    calculateRoads(filename2.toLocal8Bit().constData(),output.toLocal8Bit().constData());
    QFile file(output);
       QString line;
       ui->outtextEdit->clear();
       if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
           QTextStream stream(&file);
           while (!stream.atEnd()){
               line = stream.readLine();
               ui->outtextEdit->setText(ui->outtextEdit->toPlainText()+line+"\n");
           }
       }
   file.close();
}
void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->outtextEdit->clear();
}

void MainWindow::on_actionexit_triggered()
{

}
