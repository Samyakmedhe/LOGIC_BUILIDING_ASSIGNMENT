#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool ChkBit(UINT iNo, UINT iPos)
{   
    UINT iMask = 1;
    iMask = 1 << iPos;
    return (iNo & iMask)!= 0;
    
}

int main()
{
    UINT iValue = 0;

    printf("Enter number to check bit is On or OFF :  ");
    scanf("%d",&iValue);

    if(ChkBit(iValue , 7))
    {
        printf("7th bit is On\n");
    }
    else
    {
        printf("7th bit is OFF\n");
    }
    if(ChkBit(iValue , 15))
    {
        printf("15th bit is On\n");
    }
    else
    {
        printf("15th bit is OFF\n");
    }
    if(ChkBit(iValue , 21))
    {
        printf("21th bit is On\n");
    }
    else
    {
        printf("21th bit is OFF\n");
    }
    if(ChkBit(iValue , 28))
    {
        printf("28th bit is On\n");
    }
    else
    {
        printf("28th bit is OFF\n");
    }

    return 0 ;
}
