#include <iostream>
#include <vector>
#include <Windows.h>
#include <sstream>
#include <string>
#include <algorithm>
#include <map>
#include <conio.h>

using namespace std;

typedef int ValueType;
typedef vector<ValueType> ValueTypeVector;



enum Etype 
{ 
    laborer,
    secretary,
    manager,
    accountant,
    executive,
    researcher 
}; 
 
map<char, Etype> etypes = {
    {'l', laborer},
    {'s', secretary},
    {'m', manager},
    {'a', accountant},
    {'e', executive},
    {'r', researcher},
};

string etypeNames[6] = {
    "laborer",
    "secretary",
    "manager",
    "accountant",
    "executive",
    "researcher",
};


ValueTypeVector& split(const string &s, char delim, ValueTypeVector &elems)
{
    stringstream ss(s);
    string item;
    while(getline(ss, item, delim))
    {
        elems.push_back(stoi(item));
    }

    return elems;
}
 
ValueTypeVector split(const string &str, char delim)
{
    ValueTypeVector elems;
    split(str, delim, elems);
    return elems;
}

class MyDate
{
    public:
        MyDate()
        {

        }
        
        MyDate(string date)
        {
            ValueTypeVector arr = split(date, '/');
            
            if(arr.size() < 3) return;
            
            int day = arr[0];
            int mounth = arr[1];
            int year = arr[2];
            
            if(day <= 0 || day >= 32)
            {
                cout << "���� ������ ���� � ��������� �� 1 �� 31" << endl;
                return;
            }

            if(mounth <= 0 || mounth >= 13)
            {
                cout << "����� ������ ���� � ��������� �� 1 �� 12" << endl;
                return;
            }

            if(year <= 0)
            {
                cout << "��� �� ����� ���� �������������" << endl;
                return;
            }

            this->day = day;
            this->mounth = mounth;
            this->year = year;
        }

    
        string toString()
        {
            stringstream ss;
            ss << this->day << "." << this->mounth << "." << this->year << endl;
            return ss.str();
        }

        void show()
        {
            cout << this->toString();
        }

    private:
        int day, mounth, year;
};

class Employee
{
    public: 

        Employee(){}

        void put(string name, float salary, MyDate date, Etype etype)
        {
            this->name = name;
            this->salary = salary;
            this->date = date;
            this->etype = etype;
        }

        string toString()
        {
            stringstream ss;
            ss << "��� ����������: " << this->name 
                << " | ����� ����������: " << this->salary 
                << " | ���� ������ �� ������: " << this->date.toString() 
                << " | ���: " << etypeNames[etype] << endl;
            return ss.str();
        }

    private:
        string name;
        float salary;
        MyDate date;
        Etype etype;
};

void fillEmployee(Employee& emp)
{
    string name, strDate, strSalary;
    float salary;
    MyDate date;
    Etype etype;

    cout << "������� ��� ����������: " << endl;
    getline(cin, name);

    cout << "������� ���� ������ �� ������ � ������� (��/��/����): " << endl;
    getline(cin, strDate);
    date = MyDate(strDate);

    cout << "������� ����� ����������: " << endl;
    getline(cin, strSalary);
    salary = stof(strSalary);

    cout << "�������� ��������� ���������� �� �������������� ������: " << endl;
    
    for(const auto& type : etypeNames)
    {
        cout << type << endl;
    }

    char ch = _getch(); 

    int index = etypes[ch];

    if(index == 0 && ch != 'l')
    {
        cout << "��������� ������������ � [" << ch << "] �� �������";
        return;
    }

    etype = etypes[ch];

    emp.put(name, salary, date, etype);
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    

    vector<Employee> office;

    for (int i = 0; i < 1; i++)
    {
        Employee emp = Employee();
        fillEmployee(emp);
        office.push_back(emp);
    }
        

    for(Employee& emp : office)
        cout << emp.toString();

}