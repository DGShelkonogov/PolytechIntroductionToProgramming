#include <iostream>
#include <vector>
#include <Windows.h>
#include <sstream>

using namespace std;

class Employee
{
    public:
        string name;
        float salary;
    
    Employee()
    {
        cout << "������� ��� ����������: ";
        cin.ignore();
        cin >> this->name;

        cout << "������� ����� ����������: ";
        cin >> this->salary;
    }

    string toString()
    {
        stringstream ss;
        ss << "��� ����������: " << this->name << " | ����� ����������: " << this->salary << endl;
        return ss.str();
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector<Employee> office;

    for (int i = 0; i < 2; i++)
        office.push_back(Employee());

    for(Employee& emp : office)
        cout << emp.toString();
}