#include<stdio.h>


int Min(int iNo)
{
    static int iMin = 9;
    if(iNo == 0)
    {
        return iMin;
    }
    else
    {
        int iDigit = iNo % 10;
        if(iMin > iDigit)
        {
            iMin = iDigit;
        }
        Min(iNo/10);
        
    }
    return iMin;
   
}

int main()
{
    int iValue = 0 ;
    int iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Min(iValue);
    printf("%d\n",iRet);

    return 0;
}