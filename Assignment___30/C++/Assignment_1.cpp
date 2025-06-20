#include<iostream>
using namespace std;

typedef unsigned int UINT;
bool ChkBit(UINT iNo)
{
    UINT iMask = 0x00008000;
    UINT iResult = 0;
    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter number : ";
    cin>>iValue;

    bRet = ChkBit(iValue);
    if(bRet  == true)
    {
        cout<<"15 bit is ON\n";
    }
    else
    {
        cout<<"15 bit is OFF\n";
    }
    return 0;
}