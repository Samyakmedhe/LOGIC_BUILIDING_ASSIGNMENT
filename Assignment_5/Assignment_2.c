#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    printf("Output : ");
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf(" %d ",iCnt);
    }
    printf("\n");

}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}