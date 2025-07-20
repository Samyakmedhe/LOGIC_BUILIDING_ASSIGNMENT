#include<stdio.h>


void Display(int iNo)
{
    static int i = 1;
    static int iValue = 1 ;
    if(i <= iNo)
    {
        printf("%d\t*\t",iValue);
        iValue++;
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