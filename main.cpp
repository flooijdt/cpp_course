#include <QCoreApplication>
#include <QDebug>
#include <string>
#include <iostream>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Animal dog;
    dog.speak(QString("gaioioiu"));

    return a.exec();
}
