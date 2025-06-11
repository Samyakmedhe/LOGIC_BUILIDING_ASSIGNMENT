

#include<stdio.h>


void StrCpySmall(char *str, char *dest )
{
    while((*str != '\0'))
    {
        if((*str >= 'a') && (*str<= 'z'))
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

    StrCpySmall(Arr , Brr);

    printf("%s\n",Brr);

    return 0;
   
}