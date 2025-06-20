#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT OnBit(UINT iNo,UINT iPos )
{   
    UINT iMask = 1;
    iMask = 1 << (iPos - 1);
    
    int iResult = iMask | iNo;
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

    iRet = OnBit(iValue, iLocation);
    printf("Modified Number : %d\n",iRet);
   
    return 0 ;
}
