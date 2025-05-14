#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    printf("Output : ");
    for(iCnt = 1  ; iCnt <= iNo ; iCnt++)
    {
        if(iCnt % 2 != 0 )
        {
            printf(" %d ",iCnt);
        }
    }
    printf("\n");

}
int main()
{
    int iValue = 0;
    printf("Enter number to give Odd number up to Number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}