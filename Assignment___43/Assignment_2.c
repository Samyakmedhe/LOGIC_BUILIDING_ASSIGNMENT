#include<stdio.h>


int Max(int iNo)
{
    static int iMax = 0;
    if(iNo == 0)
    {
        return iMax;
    }
    else
    {
        int iDigit = iNo % 10;
        if(iMax < iDigit)
        {
            iMax = iDigit;
        }
        Max(iNo/10);
        
    }
    return iMax;
   
}

int main()
{
    int iValue = 0 ;
    int iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Max(iValue);
    printf("%d\n",iRet);

    return 0;
}