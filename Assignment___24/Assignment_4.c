

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{
    bool bFlag = false;
    while(*str != '\0')
    {
        if((*str == 'A')||(*str == 'E')||(*str == 'I')||(*str == 'O')||(*str == 'U')||(*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
        {
            bFlag = true;
        }
        str++;
    }
    return bFlag;
}
int main()
{

    char Arr [20];
    bool bRet = false;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    
    bRet = CheckVowel(Arr);
    if(bRet == true)
    {
        printf("It contains Vowel\n");
    }
    else
    {
        printf("there is no Vowel\n");
    }

}