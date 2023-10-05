#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include <iostream>

class Animal : public QObject
{
    Q_OBJECT
public:
    explicit Animal(QObject *parent = nullptr);

    ~Animal();

    void speak(QString message);

signals:

};

#endif // ANIMAL_H
