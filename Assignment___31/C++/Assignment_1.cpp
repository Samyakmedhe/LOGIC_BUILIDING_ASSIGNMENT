#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT Offbit(UINT iNo)
{   
    UINT iMask = 1;
    iMask = 1 << 6;
    iMask = ~iMask;
    UINT iResult = iNo & iMask;
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
