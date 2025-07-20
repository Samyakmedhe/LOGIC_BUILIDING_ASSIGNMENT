#include<stdio.h>


int Factor(int iNo)
{
    if(iNo == 0)
    {
        return 1;
    }
    else
    {
        return iNo * Factor(iNo -1);
    }
   
}

int main()
{
    int iValue = 0 ;
    int iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factor(iValue);
    printf("%d\n",iRet);

    return 0;
}