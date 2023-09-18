#include <iostream>

using namespace std;


int main() 
{
    int n, result;
    
    while (true)
    {
        result = 1;
        n = 0;

        cout << "Введите 0 чтобы завершить программу\n";
        cout << "Введите число: ";
        
        cin >> n;

        if(n == 0) break;

        for(int i = n; i > 0; i--)
        {
            result *= i;
        }

        cout << "Факториал числа: " << result << "\n";
    }
}
