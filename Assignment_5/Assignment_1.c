#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    printf("Output : ");
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf(" $  * ");
    }
    print("\n");

}
int main()
{
    int iValue = 0;
    printf("Enter number to print $ and * : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}