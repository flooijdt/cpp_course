// #include <QCoreApplication>
// #include <QDebug>
// #include<string>
#include<iostream>

int main(int argc, char *argv[])
{
    int height = 0;

    std::cout << "what is the ceiling height?: ";
    std::cin >> height;

    int total_lenght = 0;
    
    do {
        int lenght = 0;
        std::cout << "\nwhat is the wall lenght?: ";
        std::cin >> lenght;

        total_lenght = ++lenght;
    }while (total_lenght > 0);

    std::cout << "\nthe total area is " << height * total_lenght << "\n";

    return 0;
}
