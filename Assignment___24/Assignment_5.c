

#include<stdio.h>


void Reverse(char *str)
{
    char *Start = NULL;
    char *End = NULL;
    char temp = '\0';

    Start = str;
    End = str;

    while(*End += '\0')
    {
        End++;   
        str++;
    }
    End--;
    while(Start <= End) 
    {
        temp = *Start;
        *Start = *End;
        *End = temp;
        Start++;
        End--;
    }
    
}
int main()
{

    char Arr [20];
    

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    
    Reverse(Arr);
    printf("Reverse : %s\n",Arr);


}