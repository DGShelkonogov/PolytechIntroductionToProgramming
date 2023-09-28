#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <numeric>

using namespace std;


class MyDouble
{
    public:
        int wholePart;
        int fractionalPart;

    MyDouble()
    {
        wholePart = 0;
        fractionalPart = 0;
    }

    MyDouble(int whole)
    {
        wholePart = whole;
        fractionalPart = 0;
    }

    MyDouble(string whole)
    {
        string delimiter = ".";
        int dot = whole.find_first_of('.');

        string w = whole.substr(0, whole.find(delimiter));
        string f = whole.substr(dot + 1, whole.length());

        this->wholePart = stoi(w);
        this->fractionalPart = stoi(f);
    }

    string toString()
    {
        stringstream ss;
        ss << this->wholePart << "." << this->fractionalPart;
        return ss.str();
    }
};


MyDouble myPlus(MyDouble a, MyDouble b)
{
    string strFractionalA = to_string(a.fractionalPart);
    string strFractionalB = to_string(b.fractionalPart);

    int countFractionalNumbersA = strFractionalA.length();
    int countFractionalNumbersB = strFractionalB.length();
    int maxFractionalNumbers = max(countFractionalNumbersA, countFractionalNumbersB);

    if(countFractionalNumbersA > countFractionalNumbersB)
    {
        strFractionalB.append(string(countFractionalNumbersA - countFractionalNumbersB, '0'));
    }else
    {
        strFractionalA.append(string(countFractionalNumbersB - countFractionalNumbersA, '0'));
    }


    int whole = a.wholePart + b.wholePart;
    int fractional = stoi(strFractionalA) + stoi(strFractionalB);

    int d = stoi("1" + string(maxFractionalNumbers, '0'));

    int wholeOfFractional = static_cast<int>(fractional / d);
    fractional = fractional - wholeOfFractional *  d;
    whole += wholeOfFractional;
    
    stringstream ss;
    ss <<  whole << "." << fractional;
    return MyDouble(ss.str());
}

int main()
{
    auto a = MyDouble("5.37569");
    auto b = MyDouble("3.954");
    MyDouble o = myPlus(a, b).toString();
    cout << o.toString();
}