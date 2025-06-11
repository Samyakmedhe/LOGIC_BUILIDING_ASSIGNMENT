

#include<stdio.h>


void StrCpyX(char *str, char *dest)
{
    while(*str != '\0')
    {
        *dest = *str ;
        str++;
        dest++;
    }
    dest--;

}
int main()
{
    
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    StrCpyX(Arr , Brr);

    printf("%s\n",Brr);

    return 0;
   
}