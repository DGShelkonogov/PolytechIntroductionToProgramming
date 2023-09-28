#include <iostream>

using namespace std;

int main() 
{
    int y = 20;
    for(int x = 1; x <= y; x++)
        cout << string(y-x, ' ') << string(x, 'x') << "\n"; 
}
