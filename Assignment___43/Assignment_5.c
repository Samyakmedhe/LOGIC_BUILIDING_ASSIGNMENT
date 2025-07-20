#include<stdio.h>


int Reverse(int iNo)
{
    static int Rev = 0 ;
    if(iNo != 0)
    {
        Rev = Rev * 10 + (iNo % 10);
        Reverse(iNo / 10);
    }
    return Rev;
   
}

int main()
{
    int iValue = 0 ;
    int iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);
    printf("%d\n",iRet);

    return 0;
}