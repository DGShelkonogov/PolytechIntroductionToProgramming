#include <iostream>
#include <sstream>

using namespace std;


struct Time
{
    public:
        int hours, minutes, seconds;

    Time()
    {
        char dummychar;
        cout << "Введите время в формате HH:MM:SS" << endl;
        cin >> this->hours >> dummychar >> this->minutes >> dummychar >> this->seconds;
    }

    Time(const int& hours, const int& minutes, const int& seconds) 
        : hours(hours), minutes(minutes), seconds(seconds) {
    }

    string toString()
    {
        stringstream ss;
        ss << this->hours << ":" << this->minutes << ":" << this->seconds;
        return ss.str();
    }
};

template <typename T>
void mySwap(T& a, T& b) {
    T c = a;
    a = b;
    b = a;
}

int main()
{
    

    auto a = Time();
    auto b = Time();
    swap<Time>(a, b);
    cout << "a: " << a.toString() << " b: " << b.toString()<< endl;
}