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

    if(ChkBit(iValue , 5))
    {
        cout<<"5 bit is ON\n";
    }
    else
    {
        cout<<"5 bit is OFF\n";
    }


    if(ChkBit(iValue , 18))
    {
        cout<<"18 bit is ON\n";
    }
    else
    {
        cout<<"18 bit is OFF\n";
    }
    
    return 0;
}