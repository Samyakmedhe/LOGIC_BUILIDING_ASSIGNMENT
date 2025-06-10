

#include<stdio.h>


void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A')&&( *str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
    
}
int main()
{

    char Arr [20];
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    
    strlwrx(Arr);
    printf("Modified String : %s\n",Arr);


}