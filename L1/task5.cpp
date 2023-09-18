#include <iostream>

using namespace std;

int main() 
{
    double decimalPounds;
    cout << "Введите число десятичных фунтов: ";
    cin >> decimalPounds;

    int pounds = static_cast<int>(decimalPounds);
    decimalPounds -= pounds;
    int shillings = static_cast<int>(decimalPounds * 20);
    decimalPounds -= shillings / 20;
    int pence = static_cast<int>(decimalPounds * 240);

    cout << "Эквивалентная сумма в старой форме записи: £" << pounds << "." << shillings << "." << pence;
}
