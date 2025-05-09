#include<stdio.h>

void Display(int iNo , int iCount)
{
    int iCnt = 0 ;
    for (iCnt = 1; iCnt <= iCount;iCnt++ )
    {
        printf("%d ",iNo);
    }
    printf("\n");

}
int main()
{

    int iValue = 0;
    int iCount = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    printf("Enter Frequnce : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}