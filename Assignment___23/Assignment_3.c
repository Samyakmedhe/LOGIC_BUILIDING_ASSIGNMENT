#include<stdio.h>




void Display(char ch)
{
    if((ch >= 'A')&&(ch <= 'Z'))
    {
        while(ch <='Z')
        {
            printf("%c\n",ch);
            ch++;
        }
        
    }
    else if((ch >= 'a')&&(ch <= 'z'))
    {
        while(ch >= 'a')
        {
            printf("%c\n",ch);
            ch--;
        }
    }
    else
    {
        printf("%c Invaild input\n",ch);
    }

}

int main()
{
    char cValue = '\0';


    printf("Enter the Character : ");
    scanf("%c",&cValue);
    Display(cValue);
    return 0 ;
}