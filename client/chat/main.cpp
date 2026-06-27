#include "mainwindow.h"
/******************************************************************************
 *
 * @file       main.cpp
 * @brief      XXXX Function
 *
 * @author     Lxr
 * @date       2026/06/23
 * @history
 *****************************************************************************/
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile qss(":/style/stylesheet.qss");
    if(qss.open(QFile::ReadOnly)){
        qDebug("Open success");
        QString style = QLatin1String(qss.readAll());
        a.setStyleSheet(style);
        qss.close();
    }else{
        qDebug("Open failed");
    }
    MainWindow w;

    w.show();
    return QCoreApplication::exec();
}
