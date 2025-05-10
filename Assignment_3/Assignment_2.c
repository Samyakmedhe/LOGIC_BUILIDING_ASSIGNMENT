




#include<stdio.h>


void DisplayFactor(int iNo)
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
            if( iNo % iCnt == 0)
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
    
    DisplayFactor(iValue);

    return 0;

}