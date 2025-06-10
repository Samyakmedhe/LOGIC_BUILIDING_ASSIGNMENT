

#include<stdio.h>


void strtogglex(char *str)
{
    
    while(*str != '\0')
    {
        if((*str >= '0')&&( *str <= '9'))
        {
            printf("%c ",*str);
        }
        str++;
    }
    printf("\n");
    
}
int main()
{

    char Arr [20];
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    
    strtogglex(Arr);
    return 0;
   
}