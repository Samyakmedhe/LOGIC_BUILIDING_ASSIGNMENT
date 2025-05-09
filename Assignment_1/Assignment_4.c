

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
int Check(int iNo)
{
    if((iNo % 5 == 0 ))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;

    BOOL bResult = FALSE;
    printf("Enter number to Check 5 is Divisible or not : ");
    scanf("%d",&iValue);

    bResult = Check(iValue);
    if (bResult == TRUE)
    {
        printf("Yes %d Divisible By 5 ",iValue);
    }
    else
    {
        printf("%d Not Divisible By 5 ",iValue);
    }
    return 0;
}