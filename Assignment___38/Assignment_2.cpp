#include<iostream>
using namespace std;

template <class T>
T Max(T No1, T No2, T No3)
{
    T MaxValue = No1;

    if (No2 > MaxValue)
    {
        MaxValue = No2;
    }
    if (No3 > MaxValue)
    {
        MaxValue = No3;
    }

    return MaxValue;
}

int main()
{
    int iRet = Max(10, 20, 15);
    cout << "Maximum of integers: " << iRet << "\n";

    float fRet = Max(11.5f, 20.1f, 15.3f);
    cout << "Maximum of floats: " << fRet << "\n";

    double dRet = Max(12.25, 5.75, 18.5);
    cout << "Maximum of doubles: " << dRet << "\n";

    char cRet = Max('a', 'z', 'm');
    cout << "Maximum of chars: " << cRet << "\n";

    return 0;
}