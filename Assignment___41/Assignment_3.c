#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    static int i = 1;
    static int iNo1 = 5 ;
    if(i <= iNo)
    {
        printf("%d\t",iNo1);
        iNo1--;
        i++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0 ;
    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);
    printf("\n");

    return 0;
}