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
    int whole = a.wholePart + b.wholePart;
    int fractional = a.fractionalPart + a.fractionalPart;

    //int zeroCount = 0;
    //string countFractionalChar = fra.substr(dot + 1, whole.length());

    int wholeOfFractional = static_cast<int>(fractional / 100);
    fractional = fractional - wholeOfFractional * 100;
    whole += wholeOfFractional;
    
    stringstream ss;
    ss <<  whole << "." << fractional;
    return MyDouble(ss.str());
}

int main()
{
    auto a = MyDouble("2.6");
    auto b = MyDouble("4.63");

    auto o = myPlus(a, b).toString();
}