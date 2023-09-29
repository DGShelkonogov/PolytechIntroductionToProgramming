# include <iostream>
#define N 3 
using namespace std;



int compstr( const char *s1, const char *s2 )
{
    auto uc1 = (unsigned char)*s1;
    auto uc2 = (unsigned char)*s2;

    auto ruc1 = ( unsigned char)*s1 > (unsigned char)*s2;
    auto ruc2 = ( unsigned char)*s1 < (unsigned char)*s2;
    auto r = ruc1 - ruc2;

    return r;
}    


int main()
{
    const char *s1 = "Afggfdsdfghdg";
    const char *s2 = "Bgfdjnftyujnb";

    cout << "(s1, s2) = " << compstr(s1, s2) << endl;             
    cout << "(s2, s1) = " << compstr(s2, s1) << endl;             
    cout << "(s1, s1) = " << compstr(s1, s1) << endl; 
}