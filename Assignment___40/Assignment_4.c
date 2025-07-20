#include<stdio.h>
#include<stdlib.h>

void Display()
{
    static int i = 1;
    static char No ='A' ;
    if(i <= 6)
    {
        printf("%c\t",No);
        No++;
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