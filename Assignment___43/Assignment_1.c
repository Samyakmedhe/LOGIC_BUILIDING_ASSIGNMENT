#include<stdio.h>


int WhiteSpace(char *str)
{
    static int iCount = 0;
    if(*str == '\0')
    {
        return 0;
    }
    else 
    {
        if(*str == ' ')
        {
            iCount++;
        }
        WhiteSpace(str+1);
    }   
    
    return iCount;
}

int main()
{
    int iRet = 0 ;
    char arr[20];

    printf("Enter String : ");
    scanf(" %[^\n]s",arr);

    iRet = WhiteSpace(arr);
    printf("%d\n",iRet);

    return 0;
}