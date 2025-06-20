#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT Offbit(UINT iNo, UINT iPos)
{   
    UINT iMask1 = 1;
    iMask1 = 1 << (iPos - 1);
   

    iMask1 = ~iMask1;

    UINT iResult = iNo & iMask1;
    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation = 0;

    int iRet = 0;
    printf("Enter number to check bit is On or OFF :  ");
    scanf("%d",&iValue);
    printf("Enter Location : ");
    scanf("%d",&iLocation);

    iRet = Offbit(iValue, iLocation);
    printf("Modified Number : %d\n",iRet);
   
    return 0 ;
}
