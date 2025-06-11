

#include<stdio.h>
#include<stdbool.h>
bool CheckChar(char *str , char ch )
{
    bool bFlag = false;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}
int main()
{
    char Arr[20];
    char cValue;
    bool bRet = false;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter character that you want to find : ");
    scanf(" %c",&cValue);

    bRet = CheckChar(Arr, cValue);
    if(bRet == true)
    {
        printf("%c : Character found in String ",cValue);
    }
    else
    {
        printf("%c : Character not found int String ",cValue);
    }


    return 0;
}