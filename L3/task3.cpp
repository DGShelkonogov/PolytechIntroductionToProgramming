#include <iostream>

using namespace std;

struct Fraction
{
    public:
        int numerator;
        int denominator;
    
    Fraction()
    {
        char dummychar;
        cout << "Введите дробь в формате a/b: ";
        cin >> this->numerator >> dummychar >> this->denominator;
    }
    
};

int main()
{
    auto frac1 = Fraction(); 
    auto frac2 = Fraction(); 

    int numerator = frac1.numerator * frac2.denominator + frac1.denominator * frac2.numerator;
    int denominator = frac1.denominator * frac2.denominator;

    std::cout << "Сумма равна " << numerator << "/" << denominator;
}