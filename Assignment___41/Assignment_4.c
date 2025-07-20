#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    static int i = 1;
    static char No ='A' ;
    if(i <= iNo)
    {
        printf("%c\t",No);
        No++;
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