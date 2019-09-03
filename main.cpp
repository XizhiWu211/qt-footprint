#include "mainwindow.h"
#include <QApplication>
#include <qmessagebox.h>
#include <qsqldatabase.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("footprint");
    db.setUserName("root");
    db.setPassword("root");
    if (!db.open()){
        printf("failed to connect to the database") ;
       QMessageBox::information(NULL,"亲","服务挂了，等会再试试？") ;
       return -1 ;
     }
    else
       printf("successfully connected to the database") ;
    return a.exec();
}
