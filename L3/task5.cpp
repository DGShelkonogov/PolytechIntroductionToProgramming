#include <iostream>

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

    Time(int totalSeconds)
    {
        this->hours = totalSeconds / 3600;
        this->minutes = (totalSeconds % 3600) / 60;
        this->seconds = totalSeconds % 60;
    }
};


int main()
{
    auto time1 = Time();
    auto time2 = Time();
    int totalSeconds1 = time1.hours * 3600 + time1.minutes*60 + time1.seconds;
    int totalSeconds2 = time2.hours * 3600 + time2.minutes*60 + time2.seconds;
    int totalSeconds = totalSeconds1 + totalSeconds2;
    auto time = Time(totalSeconds);

    cout << time.hours << ":" << time.minutes << ":" << time.seconds;
}