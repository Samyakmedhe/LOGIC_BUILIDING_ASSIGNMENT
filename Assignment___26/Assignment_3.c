

#include<stdio.h>


int FirstChar(char *str, char ch )
{
    int iPos = 0 ;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iPos;
        }
        str++;
        iPos++;
    }
    return - 1; 
    
}
int main()
{
    char Arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter character that you want to find : ");
    scanf(" %c",&cValue);

    iRet = FirstChar(Arr, cValue);
    if(iRet == -1)
    {
        printf("Character not found is String : %d \n",iRet);
    }
    else
    {
        printf("Character location is : %d\n",iRet);
    }
    

    return 0;
}