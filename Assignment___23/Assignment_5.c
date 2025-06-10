#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>


void Display(char ch)
{
    printf("Dec\tHex\tOct\t\n");
    printf("----\t----\t----\t\n");
    int iCnt = 0;
    for (iCnt = 'A'; iCnt <= ch; iCnt++) 
    {
        printf("%3d\t%02X\t%04o\t\n", iCnt, iCnt, iCnt);
       
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c",&cValue);
    Display(cValue);

    return 0 ;
}