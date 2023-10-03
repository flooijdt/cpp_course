#include <QCoreApplication>
#include <QDebug>
#include<string>
#include<iostream>

// comment
const int numero = 23;

struct poota {
    int integ;
    double trouble;
    bool realy;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    poota virge;

    virge.realy = false;

    int arr[4] = {0, 1, 2, 3};

    std::string stringer;

    std::cin >> stringer;

    qInfo() << stringer.c_str();

    return a.exec();
}
