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

    if(ChkBit(iValue , 0))
    {
        printf("First bit is On\n");
    }
    else
    {
        printf("First bit is OFF\n");
    }
    if(ChkBit(iValue , 31))
    {
        printf("Last bit is On\n");
    }
    else
    {
        printf("Last bit is OFF\n");
    }


    return 0 ;
}
