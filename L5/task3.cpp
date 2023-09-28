#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

string reversit(string str)
{
    int length = str.length();
    string result;

    for(int i = 0; i < length + 1; i++)
    {
        cout << str[length - i];        
    }
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string a;
    getline(cin, a);
    reversit(a);
}
