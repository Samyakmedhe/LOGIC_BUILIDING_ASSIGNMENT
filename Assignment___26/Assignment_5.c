

#include<stdio.h>


void StrRevX(char *str)
{
    char *Start = NULL;
    char *End = NULL;
    char temp = '\0';

    Start = str;
    End = str;

    while(*End != '\0')
    {
        End++;
    }
    
    End--;
    while(Start <= End)
    {
        temp = *Start ;
        *Start = *End;
        *End = temp ;
        Start ++;
        End--;
    }

}
int main()
{

    char Arr[50] = {'\0'};
   

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    StrRevX(Arr);

    printf("String after Reversal : %s \n",Arr);


    
    
    return 0;
   
}