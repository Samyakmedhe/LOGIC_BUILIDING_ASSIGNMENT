#include<stdio.h>
#include<stdbool.h>

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

    printf("Enter number to check bit is On or OFF :  ");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);
    if(bRet == true)
    {
        printf("15 bit is On\n");
    }
    else
    {
        printf("15 bit is OFF\n");
    }
    


    return 0 ;
}
