



#include<stdio.h>

int SumNonfact(int iNo )
{

    int iCnt = 0;
    int iSum = 0;
   
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {   
            iSum = iSum + iCnt;
        }
    }
  
    return iSum;
}
int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter number to Print Summation of Non factor : ");
    scanf("%d",&iValue);

    iRet = SumNonfact(iValue);
    printf("Summation of Non Factor is  : %d \n",iRet);

    return 0 ;
}