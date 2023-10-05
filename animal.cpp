#include "animal.h"
#include <iostream>
#include <QDebug>

Animal::Animal(QObject *parent)
    : QObject{parent}
{

}

void Animal::speak(QString message)
{
    qInfo() << message.toStdString();

}
