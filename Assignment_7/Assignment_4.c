#include<stdio.h>

int OddFacto(int iNo )
{

    int iCnt = 0;
    int iFact = 1 ;
    
    if( iNo < 0 )
    {
        printf("INVAILD INPUT ❌: Negative value is not in Factorial , But i am considering it is positive value \n");
        iNo = -iNo;
    }
    printf("(");
    for(iCnt = 1 ;iCnt <=iNo ; iCnt++ )
    {
        if(iCnt % 2 != 0)
        {
            printf(" %d * ",iCnt);
            iFact = iFact * iCnt;
        }
    }
    printf(")\n");
    return iFact;
   

}
int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter number to Find Odd factor of that number : ");
    scanf("%d",&iValue);

    iRet = OddFacto(iValue);
    printf("OUTPUT : Odd Factorial of number is  :  %d \n",iRet);

    return 0 ;
}