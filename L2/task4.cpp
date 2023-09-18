#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double apartmentCost, initialPayment, annualInterestRate;
    int years;

    cout << "Введите стоимость квартиры: ";
    cin >> apartmentCost;

    cout << "Введите начальный взнос: ";
    cin >> initialPayment;

    cout << "Введите число лет ипотеки: ";
    cin >> years;

    cout << "Введите годовую процентную ставку: ";
    cin >> annualInterestRate;

    // Вычисление суммы кредита
    double loanAmount = apartmentCost - initialPayment;

    // Вычисление ежемесячной процентной ставки
    double monthlyInterestRate = annualInterestRate / 12 / 100;

    // Вычисление числа месяцев в ипотеке
    double totalMonths = years * 12;

    double totalRate = pow((1 + monthlyInterestRate), totalMonths);

    double monthlyPayment = loanAmount * monthlyInterestRate * totalRate / (totalRate - 1);

    cout << "Ежемесячный платеж: " << monthlyPayment << endl;

    double remainingDebt = loanAmount;
    
    for(int month = 1; month <= totalMonths; ++month)
    {
        double percentagePart = remainingDebt * monthlyInterestRate;
        double mainPart = monthlyPayment - percentagePart;
        remainingDebt -= mainPart;      

        if (month % 12 == 1) {
            int year = (month - 1) / 12 + 1;
            cout << "Год " << year << ": " << percentagePart << " (проценты) | " 
                << mainPart << " (основной долг) | Остаток: " << remainingDebt << " рублей\n";
        }  
    }

    cout << "Общая сумма выплат: " << monthlyPayment * totalMonths;
}
