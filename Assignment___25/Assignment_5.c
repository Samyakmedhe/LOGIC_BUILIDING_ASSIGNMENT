

#include<stdio.h>


int CountWhiteSpaces(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{

    char Arr [20];
    int iRet = 0;
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    
    iRet = CountWhiteSpaces(Arr);
    printf("%d\n",iRet);
    return 0;
   
}