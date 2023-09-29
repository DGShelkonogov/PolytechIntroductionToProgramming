# include <iostream>
#define N 3 
using namespace std;

void addarrays(float* a, float* b, float* c, int l)
{
    for(int i=1; i<=l; i++)
    {
        *c = *a + *b;
        a++; b++; c++;
    }
}

int main()
{
    static float A[N]={1, 7, 3};
    static float B[N]={2, 9, 6};
    static float C[N]={0, 0, 0};

    addarrays(&A[0], &B[0], &C[0], N);

    for(const auto& item : C) cout << item  << endl; 
}