#include <iostream>

using namespace std;

int maxint(int* array, int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    int numElements;

    cout << "Введите количество элементов: ";
    cin >> numElements;

    if (numElements <= 0) {
        cout << "Количество элементов должно быть больше 0." << endl;
        return 1;
    }

    int* array = new int[numElements];

    for (int i = 0; i < numElements; i++) {
        cout << "Введите элемент " << i + 1 << ": ";
        cin >> array[i];
    }

    int maxIndex = maxint(array, numElements);

    cout << "Наибольший элемент: " << array[maxIndex] << endl;
    cout << "Индекс наибольшего элемента: " << maxIndex << endl;

    delete[] array;
}
