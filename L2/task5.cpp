#include <iostream>
#include <cmath>

using namespace std;

bool next()
{
    string s;
    while (true)    
    {
        cout << "Продолжить (y/n)?";
        cin >> s;
        if (s == "y") return true;
        if (s == "n") return false;
        cout << "Неверный формат\n";
    }
}

void calculate()
{
    int poundsA, shillingsA, penceA;
    int poundsB, shillingsB, penceB;

    std::cout << "Введите первое значение: (фунты шиллинги пенсы): ";
    std::cin >> poundsA >> shillingsA >> penceA;

    std::cout << "Введите второе значение: (фунты шиллинги пенсы): ";
    std::cin >> poundsB >> shillingsB >> penceB;

    int totalPounds = poundsA + poundsB;
    int totalShillings = shillingsA + shillingsB;
    int totalPence = penceA + penceB;

    if (totalPence >= 12) {
        totalShillings += totalPence / 12;
        totalPence %= 12;
    }

    if (totalShillings >= 20) {
        totalPounds += totalShillings / 20;
        totalShillings %= 20;
    }

    cout << "Всего: " << totalPounds << " фунт " 
        << totalShillings << " шиллингов " 
        << totalPence << " пенс" << endl;
}

int main() 
{
    do
    {
        calculate();
    } while (next());
}