#include<stdio.h>

void Number(int iNo)
{ 
   
    if(iNo <= 50)
    {
        printf("Output : Small\n");
    }
    else if((iNo > 50)&& (iNo <= 100)) 
    {
        printf("Output : Medium\n");
    }
    else 
    {
        printf("Output : Large\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number to print the number is small or medium or Large : ");
    scanf("%d",&iValue);
    
    Number(iValue);

    return 0;
}