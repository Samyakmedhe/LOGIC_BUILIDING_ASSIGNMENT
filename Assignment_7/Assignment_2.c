#include<stdio.h>

int DollorToINR(int iNo )
{

    int iCnt = 0;
    int iMoney = 0 ;
    
    if( iNo < 0 )
    {
        printf("INVAILD INPUT ❌: Negative value is not in Factorial , But i am considering it is positive value \n");
        iNo = -iNo;
    }

    iMoney = iNo * 70 ;
    return iMoney;

}
int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollorToINR(iValue);
    printf("OUTPUT : Value in INR is :  %d \n",iRet);

    return 0 ;
}