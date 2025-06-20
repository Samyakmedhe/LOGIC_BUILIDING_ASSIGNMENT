#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT OnBit(UINT iNo)
{   
    UINT iMask = 0x0000000F;
    int iResult = iMask | iNo;
    return iResult;
}

int main()
{
    UINT iValue = 0;

    int iRet = 0;
    printf("Enter number to check bit is On or OFF :  ");
    scanf("%d",&iValue);

    iRet = OnBit(iValue);
    printf("Modified Number : %d\n",iRet);
   
    return 0 ;
}
