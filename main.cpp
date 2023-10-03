#include <QCoreApplication>
#include <QDebug>
#include<string>
#include<iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString task = "Please do the dishes!";

   qInfo() << task;

    return a.exec();
}
