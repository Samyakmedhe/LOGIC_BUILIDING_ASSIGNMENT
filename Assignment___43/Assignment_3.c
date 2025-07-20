#include<stdio.h>


int Small(char *str)
{
    static int iCount = 0;
    if(*str == '\0')
    {
        return 0;
    }
    else 
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        Small(str+1);
    }   
    
    return iCount;
}

int main()
{
    int iRet = 0 ;
    char arr[20];

    printf("Enter String : ");
    scanf(" %[^\n]s",arr);

    iRet = Small(arr);
    printf("%d\n",iRet);

    return 0;
}