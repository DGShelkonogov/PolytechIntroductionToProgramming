#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
    int c = a;
    a = b;
    b = c;
}

int main()
{
    int a = 10;
    int b = 5;
    swap(a, b);
    cout << "a: " << a << " b: " << b << endl;
}