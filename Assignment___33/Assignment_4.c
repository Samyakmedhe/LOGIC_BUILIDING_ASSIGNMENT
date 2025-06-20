#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool ChkBit(UINT iNo,UINT iPos1 , UINT iPos2 )
{   
    UINT iMask1 = 1, iMask2 = 1;
    iMask1 = 1 << (iPos1 -1);
    iMask2 = 1 << (iPos2 -1);
    if((iNo & iMask1)&& (iNo & iMask2))
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
    UINT iValue = 0, iLocation1 = 0, iLocation2 = 0;

    bool bRet = false;

    printf("Enter number to check bit is On or OFF :  ");
    scanf("%d",&iValue);
    printf("Enter first Location : ");
    scanf("%d",&iLocation1);
    printf("Enter second Location : ");
    scanf("%d",&iLocation2);

    bRet = ChkBit(iValue,iLocation1, iLocation2);
    if(bRet)
    {
        printf("%d and %d is On... \n",iLocation1, iLocation2);
    }
    else
    {
        printf("%d and %d is OFF... \n",iLocation1, iLocation2);
    }
   
    return 0 ;
}
