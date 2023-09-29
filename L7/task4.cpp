# include <iostream>
using namespace std;

int main()
{
    int* ap[10];

    for(int i = 0; i < 10; i++)
    {
        auto m = new int [10];
        
        for(int j = 0; j < 10; j++)
        {
            //m[j] = (i + 1) * 10 + (j+1);
            *(m + j) = (i + 1) * 10 + (j+1);
        }
        
        //ap[i] = m; 
        *(ap + i) = m; 
    } 

    //cout << ap[2][3];
    cout << *(*(ap + 2) + 3);
}