




#include<stdio.h>

int FactDiff(int iNo )
{

    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
   
    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {   
            iSum1 = iSum1 + iCnt;
            
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    printf("(%d - %d)\n",iSum1, iSum2);
    return iSum1 - iSum2;
}
int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter number to Print Difference between Factor and Non factor : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("Difference of Factor and Non factor is  : %d \n",iRet);

    return 0 ;
}