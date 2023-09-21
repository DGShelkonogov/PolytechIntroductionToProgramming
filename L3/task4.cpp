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
};


int main()
{
    auto time = Time();
    int totalSeconds = time.hours * 3600 + time.minutes*60 + time.seconds;
    cout << "Всего секунд: " << totalSeconds;
}