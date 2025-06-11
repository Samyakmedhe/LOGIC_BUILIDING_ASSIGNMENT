

#include<stdio.h>


void StrCpyCap(char *str, char *dest )
{
    while((*str != '\0'))
    {
        if((*str >= 'A') && (*str<= 'Z'))
        {
            *dest = *str ;
            
            dest++;
        }
        
        str++;
    }
    dest--;

}
int main()
{
    
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    StrCpyCap(Arr , Brr);

    printf("%s\n",Brr);

    return 0;
   
}