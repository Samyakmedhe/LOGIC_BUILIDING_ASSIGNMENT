

#include<stdio.h>


void StrNCpyX(char *str, char *dest, int iCnt )
{
    while((*str != '\0')&&(iCnt != 0))
    {
        *dest = *str ;
        str++;
        dest++;
        iCnt--;
    }
    dest--;

}
int main()
{
    
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    StrNCpyX(Arr , Brr, 10);

    printf("%s\n",Brr);

    return 0;
   
}