#include<stdio.h>

void Display(int iNo )
{

    int iCnt = 0;
    if( iNo < 0 )
    {
        printf("INVAILD INPUT ❌: your Value is Negative , But i am considering it is positive value \n");
        iNo = -iNo;
    }
   for(iCnt = 1 ; iCnt <= iNo*2; iCnt++)
   {
        if(iCnt <= iNo)
        {
            printf(" * ");
        }
        else
        {
            printf(" # ");
        }
   }
   printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number print Pattern: ");
    scanf("%d",&iValue);

    Display(iValue);


    return 0 ;
}