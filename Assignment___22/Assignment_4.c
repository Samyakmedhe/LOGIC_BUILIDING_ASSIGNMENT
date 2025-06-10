#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



bool CheckCapital(char ch)
{
    bool bFlag = false;

    if((ch >= 'a')&&(ch <= 'z')) 
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
    bRet = CheckCapital(cValue);
    if(bRet == true)
    {
        printf(" %c : It is Small Case\n",cValue);
    }
    else
    {
        printf(" %c : It is not a Small Case\n",cValue);
    }
    return 0 ;
}