
#include<stdio.h>
#define TRUE 1 
#define FALSE 0
typedef int BOOL ;

BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0 )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


int main()
{

    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number to Check Even or Odd : ");
    scanf("%d",&iValue);
    bRet = ChkEven(iValue);
    if(bRet == TRUE)
    {
        printf("%d is Even Number \n",iValue);
    }
    else
    {
        printf("%d is Odd Number \n",iValue);
    }
  
    return 0 ;
}