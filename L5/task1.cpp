#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <numeric>

using namespace std;

int main() {
    vector<double> numbers;
    int num_of_values;

    cout << "Введите количество дробных чисел: ";
    if (!(cin >> num_of_values) || num_of_values <= 0) {
        cout << "Некорректный ввод. Количество чисел должно быть больше 0." << endl;
        return 1;
    }

    for (int i = 0; i < num_of_values; ++i) {
        string input;
        cout << "Введите дробное число " << i + 1 << ": ";
        cin >> input;

        double value;
        istringstream(input) >> value;
        if (cin.fail()) {
            cout << "Некорректный формат числа. Пожалуйста, используйте формат a.b" << endl;
            return 1;
        }

        numbers.push_back(value);
    }

    double total = accumulate(numbers.begin(), numbers.end(), 0.0);
    double average = total / num_of_values;

    cout << "Введенные дробные числа: ";
    for (const double& number : numbers) {
        cout << number << " ";
    }
    cout << endl;

    cout << "Среднее значение: " << average << endl;
}
