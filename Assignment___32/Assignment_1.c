#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool CheckBit(UINT iNo , int iPos)
{
    UINT iMask1 = 1;
    if(iPos <= 0 || iPos > 32)
    {
        printf("Invaild Bit Position \n");
        return -1;
    }
    iMask1 = iMask1 << (iPos -1 );
    UINT iResult = iNo & iMask1;
    return iResult == iMask1;
}
int main()
{
    UINT iValue = 0, iLocation = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter Location that you want check  : ");
    scanf("%d",&iLocation);

    bRet = CheckBit(iValue , iLocation);
    if(bRet)
    {
        printf("bit is ON at location %d\n",iValue);
    }
    else
    {
        printf("bit is OFF at location %d\n",iValue);
    }





    return 0 ;
}