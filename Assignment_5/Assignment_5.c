#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    printf("Output : ");
    for(iCnt = 1 ; iCnt <= 5 ; iCnt++)
    {
        printf(" %d ",iNo * iCnt);
    }
    printf("\n");

}
int main()
{
    int iValue = 0;
    printf("Enter number to print 5 multiples of that number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}