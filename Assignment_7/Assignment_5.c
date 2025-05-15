#include<stdio.h>

int EvenOddFacto(int iNo )
{

    int iCnt = 0;
    int iFact1 = 1 ;
    int iFact2 = 1;
    if( iNo < 0 )
    {
        printf("INVAILD INPUT ❌: Negative value is not in Factorial , But i am considering it is positive value \n");
        iNo = -iNo;
    }

    for(iCnt = 1 ;iCnt <=iNo ; iCnt++ )
    {
        if(iCnt % 2 == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
        else
        {
            iFact2 = iFact2 * iCnt;
        }
    }
    printf("( %d - %d )\n",iFact1,iFact2);
    return iFact1 - iFact2;
   

}
int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter number to Find Diference Even odd factors : ");
    scanf("%d",&iValue);

    iRet = EvenOddFacto(iValue);
    printf("OUTPUT : Factorial Difference of Even and odd Number is :  %d \n",iRet);

    return 0 ;
}