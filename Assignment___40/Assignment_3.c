#include<stdio.h>
#include<stdlib.h>

void Display()
{
    static int i = 1;
    static int iNo = 5 ;
    if(i <= 5)
    {
        printf("%d\t",iNo);
        iNo--;
        i++;
        Display();
    }
}

int main()
{
    Display();
    printf("\n"); 

    return 0;
}