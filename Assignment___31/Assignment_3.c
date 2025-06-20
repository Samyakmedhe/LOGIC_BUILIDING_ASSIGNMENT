#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT ToggleBit(UINT iNo)
{   
    UINT iMask = 1;
    iMask = 1 << 6;
    UINT iResult = iNo ^ iMask;
    return iResult;
}

int main()
{
    UINT iValue = 0;

    int iRet = 0;
    printf("Enter number to check bit is On or OFF :  ");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);
    printf("Modified Number : %d\n",iRet);
   
    return 0 ;
}
