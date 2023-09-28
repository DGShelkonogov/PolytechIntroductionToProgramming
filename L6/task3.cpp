#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <Windows.h>
using namespace std;
 
typedef int ValueType;
typedef vector<ValueType> ValueTypeVector;
 
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
        int day, mounth, year;
    
    MyDate(string date)
    {
        ValueTypeVector arr = split(date, '/');
        
        if(arr.size() < 3) return;
        
        int day = arr[0];
        int mounth = arr[1];
        int year = arr[2];
        
        if(day <= 0 || day >= 32)
        {
            cout << "      1  31" << endl;
            return;
        }

        if(mounth <= 0 || mounth >= 13)
        {
            cout << "      1  12" << endl;
            return;
        }

        if(year <= 0)
        {
            cout << "    " << endl;
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
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string dateStr;
    cout << "    (//)" << endl;
    cin >> dateStr;

    auto date = MyDate(dateStr);
    date.show();
}