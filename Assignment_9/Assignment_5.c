

#include<stdio.h>
int CountLessSix(int iNo)
{
    int iDigit = 0 ;
    int iCnt = 0;
    if(iNo < 0 )
    {
        iNo= -iNo;
    }

   while(iNo!= 0)
    {
        iDigit = iNo % 10;
        if(iDigit  < 6  )
        {
            iCnt = iCnt + 1;
        }
        iNo = iNo /10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number to Count less than 6  : ");
    scanf("%d",&iValue);

    iRet = CountLessSix(iValue);
    printf(" %d numbers are less than 6 \n",iRet);
    return 0 ;
}