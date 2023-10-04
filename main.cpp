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
    
    int lenght = 0;

    do {
        std::cout << "\nwhat is the wall lenght?: ";
        std::cin >> lenght;

        total_lenght += lenght;
    }while (lenght > 0);

    std::cout << "\nthe total area is " << height * total_lenght << "\n";

    return 0;
}
