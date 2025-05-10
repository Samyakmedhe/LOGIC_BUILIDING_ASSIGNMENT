


#include<stdio.h>



void DisplayConvert(char CValue)
{

    if(CValue >= 'a' && CValue <='z' )
    {
        printf("%c\n",CValue -32);
    }
    else if (CValue >= 'A' && CValue <='Z' )
    {
        printf("%c \n", CValue+ 32);
    }
}

int main()
{
    char CValue = '\0';

    printf("Enter Charater : ");
    scanf("%c",&CValue);

    DisplayConvert(CValue);


    return 0 ;

}