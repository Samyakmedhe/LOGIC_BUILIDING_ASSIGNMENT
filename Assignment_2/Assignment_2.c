
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    while(iNo > iCnt)
    {
        printf(" * ");
        iNo--;
    }
    printf("\n");
}
int main()
{
    int iValue = 0 ;

    printf("Enter Number to Print * : ");
    scanf("%d",&iValue);
    Display(iValue);

    return 0 ;
}