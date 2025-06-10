#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



bool CheckCapital(char ch)
{
    bool bFlag = false;

    if((ch >= 'a')&&(ch <= 'z')||((ch >= 'A')&&(ch <= 'Z'))) 
    {
        bFlag = false ;
    }
    else if((ch >= '0')&&(ch <= '9'))
    {
        bFlag = false ;
    }
    else
    {
        bFlag = true;
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
        printf(" %c : It is Special Character\n",cValue);
    }
    else
    {
        printf(" %c : It is not a Special Character\n",cValue);
    }
    return 0 ;
}