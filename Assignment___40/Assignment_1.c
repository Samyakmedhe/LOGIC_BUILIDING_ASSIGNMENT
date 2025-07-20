#include<stdio.h>
#include<stdlib.h>

void Display()
{
    static int i = 1;
    if(i <= 5)
    {
        printf("*\t");
        i++;
        Display();
    }
    printf("\n");
}

int main()
{
    Display();

    return 0;
}