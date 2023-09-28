#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>


using namespace std;

struct Employee
{
    public:
        string name;
        long number;
};

void getData(Employee emp)
{
    cout << "���: " << emp.name << " ����� " << emp.number << endl;
}

Employee putData()
{
    Employee employee;
    cout << "������� ��� ����������: ";
    cin.ignore();
    cin >> employee.name;

    cout << "������� ����� ����������: ";
    cin >> employee.number;

    return employee;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector<Employee> employees;

    for(int i = 0; i < 1; i++)
    {
        auto emp = putData();
        employees.push_back(emp);
    }

    for (const auto& emp : employees)
    {
        getData(emp);
    }
}
