

# include <iostream>
using namespace std;

int main()
{
    int a0[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int a1[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20}; 
    int a2[10] = {21, 22, 23, 24, 25, 26, 27, 28, 29, 30}; 
    int a3[10] = {31, 32, 33, 34, 35, 36, 37, 38, 39, 40}; 
    int a4[10] = {41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
    int a5[10] = {51, 52, 53, 54, 55, 56, 57, 58, 59, 60}; 
    int a6[10] = {61, 62, 63, 64, 65, 66, 67, 68, 69, 70}; 
    int a7[10] = {71, 72, 73, 74, 75, 76, 77, 78, 79, 80}; 
    int a8[10] = {81, 82, 83, 84, 85, 86, 87, 88, 89, 90}; 
    int a9[10] = {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}; 
    
    int* ap[10] = {a0, a1, a2, a3, a4, a5, a6, a7, a8, a9};

    //cout << ap[2][3];
    cout << *(*(ap + 2) + 3);
 
}