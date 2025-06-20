#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT Offbit(UINT iNo)
{   
    UINT iMask1 = 1, iMask2 = 1;
    iMask1 = 1 << 6;
    iMask2 = 1 << 9;

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;

    UINT iResult = iNo & iMask1;
    iResult = iResult & iMask2;

    return iResult;
}

int main()
{
    UINT iValue = 0;

    int iRet = 0;
    printf("Enter number to check bit is On or OFF :  ");
    scanf("%d",&iValue);

    iRet = Offbit(iValue);
    printf("Modified Number : %d\n",iRet);
   
    return 0 ;
}
