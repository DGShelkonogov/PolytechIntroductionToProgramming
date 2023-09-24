#include <iostream>

using namespace std;

int main() 
{
    float decimalPounds;
    cout << "Введите число десятичных фунтов: ";
    cin >> decimalPounds;

    int pounds = static_cast<int>(decimalPounds);
    decimalPounds -= pounds;
    int shillings = static_cast<int>(decimalPounds * 20.0);
    decimalPounds -= shillings / 20.0;
    int pence = static_cast<int>(decimalPounds * 240.0);

    cout << "Эквивалентная сумма в старой форме записи: £" 
        << pounds << "." << shillings << "." << pence;
}
