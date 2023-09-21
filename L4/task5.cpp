#include <iostream>

using namespace std;

int global = 0;

void repeateLocal()
{
    static int count = 0;
    std::cout << "Функция использующая локальную переменную вызывалась " << count << " раз" << std::endl;
    count++;
}

void repeateGlobal()
{
    cout << "Функция использующая глобальную переменную вызывалась " << global << " раз" << endl;
    global++;
}

int main()
{
    for (int i = 0; i < 10; i++) {
        repeateLocal();
    }

    for (int i = 0; i < 10; i++) {
        repeateGlobal();
    }
}
