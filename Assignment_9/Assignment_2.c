#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
    int iDigit = 0;
    int TrueFalse = 0;
    if(iNo < 0 )
    {
        iNo = - iNo;
    }
    if(iNo == 0)
    {
        printf("Yes , the number contains Zero...");
    }

    while(iNo!= 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0 )
        {
            TrueFalse = 1;
            break;
        }
        else
        {
            TrueFalse = 0;
        }
        iNo = iNo /10;

    }
    if(TrueFalse ==1 )
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int iValue = 0;
    bool bret = false;

    printf("Enter number to check it contain Zero or not : ");
    scanf("%d", &iValue);
    bret = ChkZero(iValue);
    if(bret == true)
    {
        printf("Yes , the number contains Zero...");
    }
    else
    {
        printf("No , the number Not contains Zero...");
    }

    return 0;
}