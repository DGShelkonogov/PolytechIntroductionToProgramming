#include <iostream>
#include <string>

using namespace std;

int main()
{
    double tc, tf;

    cout << "Введите температуру (Цельсий): ";
    cin >> tc;

    tf = (tc * 9/5) + 32;
    
    cout << "Температура в градусах Фаренгейта: " << tf;
}