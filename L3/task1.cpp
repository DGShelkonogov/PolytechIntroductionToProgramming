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
        cout << "������� ��� ����������: ";
        cin.ignore();
        cin >> this->name;

        cout << "������� ����� ����������: ";
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
        cout << "��������� �" << i + 1
             << "| ���: " << office[i].name 
             << " | �����: " << office[i].salary << endl;
}