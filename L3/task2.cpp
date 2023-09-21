#include <iostream>
#include <vector>
#include <conio.h>
#include <map>

using namespace std;

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

int main()
{
    cout << "Нажмите любую клавишу для продолжения..." << endl;
    
    char ch = _getch(); 

    int index = etypes[ch];

    if(index == 0 && ch != 'l')
    {
        cout << "Должность начинающаяся с [" << ch << "] не найдена";
        return 0;
    }

    cout << "Полное название должности: " << etypeNames[index] << endl;

    return 0;
}