

#include<stdio.h>
int CountFour(int iNo)
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
        if(iDigit == 4 )
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
    printf("Enter number to Count 4 : ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);
    printf("4 content %d times in it \n",iRet);
    return 0 ;
}