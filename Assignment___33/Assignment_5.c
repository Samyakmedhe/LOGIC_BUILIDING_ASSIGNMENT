#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT ToggleBit(UINT iNo, int iStart ,int iEnd )
{   
    UINT iMask = 0;
    
    if(iStart < 1 || iEnd > 32 || iStart > iEnd)
    {
        printf("Invaild input ...");
        return iNo ;
    }

    for(int iCnt =0; iCnt <= iEnd ; iCnt++)
    {
        iMask = iMask |(1<<(iCnt-1));
    }
    return iNo ^ iMask;
   
}

int main()
{
    UINT iValue = 0, iStart = 0 , iEnd = 0;

    int iRet = 0;
    printf("Enter number to check bit is On or OFF :  ");
    scanf("%d",&iValue);
    
    printf("Enter starting position: ");
    scanf("%d", &iStart);

    printf("Enter ending position: ");
    scanf("%d", &iEnd);

    iRet = ToggleBit(iValue, iStart , iEnd);
    printf("Modified Number After toggle from %d to %d is : %u \n",iStart,iEnd,iRet);
   
    return 0 ;
}
