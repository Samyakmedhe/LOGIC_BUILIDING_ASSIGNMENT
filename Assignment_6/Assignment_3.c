
#include<stdio.h>

int Factorial(int iNo )
{

    int iCnt = 0;
    int iFact = 1;
    if( iNo < 0 )
    {
        printf("INVAILD INPUT ❌: Negative value is not in Factorial , But i am considering it is positive value \n");
        iNo = -iNo;
    }
    printf("(");
    for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
    {
        printf("%d * ",iCnt);
        iFact = iFact * iCnt;
    }
    printf(")\n");
    
    return iFact;
}
int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial is  : %d \n",iRet);

    return 0 ;
}