#include <iostream>
#include <vector>
#include <Windows.h>

using namespace std;

struct Employee
{
    public:
        string name;
        float salary;
    
    Employee()
    {
        cout << "Введите имя сотрудника: ";
        cin.ignore();
        cin >> this->name;

        cout << "Введите оклад сотрудника: ";
        cin >> this->salary;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector<Employee> office;

    for (int i = 0; i < 3; i++)
        office.push_back(Employee());
    
    cout << endl;

    for (int i = 0; i < office.size(); i++)
        cout << "Сотрудник №" << i + 1
             << "| Имя: " << office[i].name 
             << " | Оклад: " << office[i].salary << endl;
}