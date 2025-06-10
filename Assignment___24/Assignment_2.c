
#include<stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
    
}
int main()
{

    char Arr[20];
    int iRet = 0 ;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    iRet = CountSmall(Arr);
    printf("Count of Small letters is : %d\n",iRet);

    return 0 ;
}
