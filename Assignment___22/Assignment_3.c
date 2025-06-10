#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



bool CheckDigits(char ch)
{
    bool bFlag = false;

    if((ch >= '0')&&(ch <= '9')) 
    {
        bFlag = true ;
    }
    return bFlag;
}
int main()
{
    char cValue = '\0';
    bool bRet = false;


    printf("Enter the Character : ");
    scanf("%c",&cValue);
    bRet = CheckDigits(cValue);
    if(bRet == true)
    {
        printf(" %c : It is Digits\n",cValue);
    }
    else
    {
        printf(" %c : It is not a Digits\n",cValue);
    }
    return 0 ;
}