#include <iostream>

using namespace std;


bool next()
{
    string s;
    while (true)    
    {
        cout << "Продолжить (y/n)?";
        cin >> s;
        if (s == "y") return true;
        if (s == "n") return false;
        cout << "Неверный формат\n";
    }
}

long hmstoSecs(int h, int m, int s)
{
    return h*3600 + m*60 + s;
}

int main()
{
    int h, m, s;

    do
    {
        h = 0; m = 0; s = 0;
        char dummychar;
        cout << "Введите время в формате HH:MM:SS" << endl;
        cin >> h >> dummychar >> m >> dummychar >> s;
        cout << "Всего секунд: " << hmstoSecs(h, m, s) << "\n";


    } while (next());
}