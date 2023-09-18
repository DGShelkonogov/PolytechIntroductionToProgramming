#include <iostream>

using namespace std;

int main() 
{
    int a, b, c, d;
    char dummychar;

    cout << "Введите первую дробь в формате a/b: ";
    cin >> a >> dummychar >> b;

    cout << "Введите вторую дробь в формате c/d: ";
    cin >> c >> dummychar >> d;

    int numerator = a * d + b * c;
    int denominator = b * d;

    std::cout << "Сумма равна " << numerator << "/" << denominator;
}
