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

struct MyTime
{
    public:
        int seconds, minutes, hours;
    
    MyTime()
    {
        this->seconds = 0;
        this->minutes = 0;
        this->hours = 0;
    }
    

    MyTime(int totalSeconds)
    {
        this->hours = totalSeconds / 3600;
        this->minutes = (totalSeconds % 3600) / 60;
        this->seconds = totalSeconds % 60;
    }
    
    
    MyTime(string time)
    {
        ValueTypeVector arr = split(time, ':');
        
        if(arr.size() < 3) return;
        
        int seconds = arr[2];
        int minutes = arr[1];
        int hours = arr[0];
        
        if(hours <= 0 || hours >= 25)
        {
            cout << "Час должен быть в диапазоне от 1 до 24" << endl;
            return;
        }

        if(minutes <= 0 || minutes >= 61)
        {
            cout << "Минуты долюны быть в диапазоне от 1 до 60" << endl;
            return;
        }

        if(seconds <= 0 || seconds >= 61)
        {
            cout << "Секунды должены быть в диапазоне от 1 до 60" << endl;
            return;
        }
       
        this->seconds = seconds;
        this->minutes = minutes;
        this->hours = hours;
    }

    string toString()
    {
        stringstream ss;
        ss << this->hours << ":" << this->minutes << ":" << this->seconds << endl;
        return ss.str();
    }

    void show()
    {
        cout << this->toString();
    }
};


MyTime plusTime(MyTime a, MyTime b)
{
    int totalSecondsA = a.hours * 3600 + a.minutes*60 + a.seconds;
    int totalSecondsB = b.hours * 3600 + b.minutes*60 + b.seconds;
    return MyTime(totalSecondsA + totalSecondsB);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    string timeStrA, timeStrB;
    
    cout << "Введите время в формате (ЧЧ:ММ:СС)" << endl;
    cin >> timeStrA;
    cout << "Введите время в формате (ЧЧ:ММ:СС)" << endl;
    cin >> timeStrB;
    
    auto timeA = MyTime(timeStrA);
    auto timeB = MyTime(timeStrB);
    
    MyTime timeC = plusTime(timeA, timeB);
    timeC.show();
}