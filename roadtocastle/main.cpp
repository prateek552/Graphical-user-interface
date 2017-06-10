#include "mainwindow.h"
#include <QApplication>
//#include <QtMultimedia>
#include <QVideoWindowControl>
#include <QVideoWidget>
#include <QVideoDeviceSelectorControl>
#include <QMediaPlayer>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QMediaPlayer* player =new QMediaPlayer;
    QVideoWidget* vw=new QVideoWidget;
    player->setVideoOutput(vw);
    player->setMedia(QUrl("qrc:/../../start.mp4"));
    player->play();
    w.setWindowFlags(Qt::FramelessWindowHint| Qt::MSWindowsFixedSizeDialogHint);
    w.show();
    return a.exec();
}
