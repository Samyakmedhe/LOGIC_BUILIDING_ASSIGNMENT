#include<iostream>

using namespace std;


T Multiply(T No1 ,T  No2)
{
    T Ans ;
    Ans = No1 * No2;
    return Ans;
}   
int main()
{

    int iRet = Multiply(10, 20);
    cout << "Multiplication of integers: " << iRet << "\n";

    float fRet = Multiply(10.5f, 2.0f);
    cout << "Multiplication of floats: " << fRet << "\n";

    double dRet = Multiply(3.5, 4.5);
    cout << "Multiplication of doubles: " << dRet << "\n";

    return 0;
}