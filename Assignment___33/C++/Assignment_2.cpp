#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool ChkBit(UINT iNo, UINT iPos)
{   
    UINT iMask = 1;
    iMask = 1 << iPos;
    UINT iResult = iNo & iMask;
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
    UINT iValue = 0, iValue1 = 5 , iValue2 = 8;

    bool bRet1 = false;
    bool bRet2 = false;

    printf("Enter number to check bit is On or OFF :  ");
    scanf("%d",&iValue);

    bRet1 = ChkBit(iValue, iValue1);
    if(bRet1 == true)
    {
        printf("5 bit is On\n");
    }
    else
    {
        printf("5 bit is OFF\n");
    }

    bRet2 = ChkBit(iValue, iValue2);
    if(bRet2 == true)
    {
        printf("18 bit is On\n");
    }
    else
    {
        printf("18 bit is OFF\n");
    }
    
    return 0 ;
}
