



#include<stdio.h>


void PrintEven(int iNo)
{
    int iCnt = 0;
    
   if(iNo <= 0 )
    {
        iNo = -iNo;
    }
    else
    {
        for(iCnt = 1 ; iCnt < iNo; iCnt++)
        {
            if(iNo % iCnt == 0 && iCnt % 2 == 0 )
            {
                printf("  %d  ",iCnt);
            
            }
            
        }
        printf("\n");
    }
   
}

int main()
{
    int iValue = 0;
    printf("Enter Number :  ");
    scanf("%d", &iValue);
    
    PrintEven(iValue);

    return 0;

}