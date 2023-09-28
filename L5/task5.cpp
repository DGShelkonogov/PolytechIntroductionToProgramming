#include <iostream>
using namespace std;

struct Distance {
    public: 
        int feet;
        int inches;
};

Distance calculateAverageDistance(Distance distances[], int size) {
    Distance totalDistance = {0, 0};

    for (int i = 0; i < size; i++) {
        totalDistance.feet += distances[i].feet;
        totalDistance.inches += distances[i].inches;
    }

    totalDistance.feet += totalDistance.inches / 12;
    totalDistance.inches %= 12;

    totalDistance.feet /= size;
    totalDistance.inches /= size;

    return totalDistance;
}

int main() {
    Distance distances[5];

    for (int i = 0; i < 5; i++) {
        cout << "Введите интервал " << (i + 1) << " (футы дюймы): ";
        cin >> distances[i].feet >> distances[i].inches;
    }

    Distance averageDistance = calculateAverageDistance(distances, 5);

    cout << "Среднее значение интервалов: " 
        << averageDistance.feet << " футов " 
        << averageDistance.inches << " дюймов" << endl;
}
