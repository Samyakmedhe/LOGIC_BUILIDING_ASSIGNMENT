#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    printf("Output : ");
    for(iCnt = -iNo  ; iCnt <= iNo ; iCnt++)
    {
        printf(" %d ",iCnt);
    }
    printf("\n");

}
int main()
{
    int iValue = 0;
    printf("Enter number to print ist number line : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}