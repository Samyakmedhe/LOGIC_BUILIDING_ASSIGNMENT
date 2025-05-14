



#include<stdio.h>

int MultiFact(int iNo )
{

    int iCnt = 0;
    int Multi = 1;
    printf("(");
    for(iCnt = 1 ; iCnt< iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {   
            printf("*");
            printf(" %d ",iCnt);
            Multi = Multi * iCnt; 
        }
    }
    printf(")\n");
    return Multi;
}
int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter number to Print there Factor Multiplication : ");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);
    printf("Multiplication of Factors is : %d \n",iRet);

    return 0 ;
}