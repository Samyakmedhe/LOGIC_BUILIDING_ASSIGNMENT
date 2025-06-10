
#include<stdio.h>

int CountFreq(char *str)
{
    int iCountCap = 0, iCountSmall = 0, iFreq = 0;
    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            iCountSmall++;
        }
        else
        {
            iCountCap++;
        }
        str++;
    }
    iFreq = iCountCap - iCountSmall;
    return iFreq;
    
}
int main()
{

    char Arr[20];
    int iRet = 0 ;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    iRet = CountFreq(Arr);
    printf("Difference between Capital and small letters : %d\n",iRet);

    return 0 ;
}
