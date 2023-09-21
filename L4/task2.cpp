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

    Time(const int& hours, const int& minutes, const int& seconds) 
        : hours(hours), minutes(minutes), seconds(seconds) {
    }

};

long timeToSecs(Time time)
{
    return time.hours * 3600 + time.minutes*60 + time.seconds;
}

Time secsToTime(long seconds)
{
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int seconds = seconds % 60;
    return Time(hours, minutes, seconds);
}

int main()
{
    auto time1 = Time();
    auto time2 = Time();
    int totalSeconds1 = time1.hours * 3600 + time1.minutes*60 + time1.seconds;
    int totalSeconds2 = time2.hours * 3600 + time2.minutes*60 + time2.seconds;
    int totalSeconds = totalSeconds1 + totalSeconds2;
    auto time = secsToTime(totalSeconds);

    cout << time.hours << ":" << time.minutes << ":" << time.seconds;
}