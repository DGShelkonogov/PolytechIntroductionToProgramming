#include <iostream>

using namespace std;

int main() 
{
    int y = 20;
    for(int x = 1; x <= y; x++)
    {
        string whitespace(y-x, ' ');
        string content(x, 'x');

        cout << whitespace << content << "\n"; 
    }
}
