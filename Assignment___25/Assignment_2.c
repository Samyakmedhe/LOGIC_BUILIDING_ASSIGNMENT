

#include<stdio.h>


void strruprx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a')&&( *str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
    
}
int main()
{

    char Arr [20];
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    
    strruprx(Arr);
    printf("Modified String : %s\n",Arr);


}