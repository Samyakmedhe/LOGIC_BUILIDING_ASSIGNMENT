#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



bool CheckCharacter(char ch)
{
    bool bFlag = false;

    if((ch >= 'A')&&(ch <= 'Z') || (ch >= 'a')&&(ch <= 'z')) 
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
    bRet = CheckCharacter(cValue);
    if(bRet == true)
    {
        printf(" %c : It is Character\n",cValue);
    }
    else
    {
        printf(" %c : It is not a Character\n",cValue);
    }
    return 0 ;
}