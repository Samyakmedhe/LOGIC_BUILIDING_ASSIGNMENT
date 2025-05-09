#include<stdio.h>

void Display (int iNo)
{
    int iCnt = 0 ;
    while(iCnt < iNo)
    {
        printf(" * ");
        iCnt++;
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter Number To print * : ");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0 ;
}