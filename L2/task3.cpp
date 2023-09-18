#include <iostream>

using namespace std;

int main() 
{
    double start_c, years, percent, sum;

    cout << "Введите начальный вклад: ";
    cin >> start_c;

    cout << "Введите число лет: ";
    cin >> years;

    cout << "Введите процентную ставку: ";
    cin >> percent;

    percent /= 100;

    sum = start_c;

    for(int i = 0; i < years; i++){
        sum += (sum * percent);
        cout << "В конце " << i+1 << "-го года вы получите " << sum << "долларов. \n";
    }

    cout << "Через " << years << " лет вы получите " << sum << " доллара.";
}
