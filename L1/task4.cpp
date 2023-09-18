#include <iostream>

using namespace std;

int main() 
{
    double pound, shilling, pence;

    cout << "Введите количество фунтов: ";
    cin >> pound;
    cout << "Введите количество шиллингов: ";
    cin >> shilling;
    cout << "Введите количество пенсов: ";
    cin >> pence;

    double decimal_pounds = (pound * 240 + shilling * 12 + pence) / 240;

    cout << "Десятичные фунты: £" << decimal_pounds;
}
