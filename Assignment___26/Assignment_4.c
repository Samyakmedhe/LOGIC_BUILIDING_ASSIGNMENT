

#include<stdio.h>


int LastChar(char *str, char ch )
{
    int iPos = 0 ;
    int iLastPos = -1;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLastPos = iPos;
        }
        str++;
        iPos++;
    }
    return iLastPos; 
    
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

    iRet = LastChar(Arr, cValue);
    if(iRet == -1)
    {
        printf("Character not found is String ");
    }
    else
    {
        printf("Character  LAST occurrence is : %d\n",iRet);
    }
    

    return 0;
}