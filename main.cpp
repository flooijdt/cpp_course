#include <QCoreApplication>
#include <QDebug>
#include<string>
#include<iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString task = "Please do the dishes!";

    int max = 0;

    std::cout << "give me the ammount of times you want me to repeat: \n";
    std::cin >> max;

    for (int var = 0; var < 50; ++var) {
        qInfo() << var;
        qInfo() << task;
        if (var == max) {
            break;
        }
    }

    return a.exec();
}
