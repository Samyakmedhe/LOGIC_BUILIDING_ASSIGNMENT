



#include<stdio.h>


void PrintEven(int iNo)
{
    int iCnt = 0;
    
    if(iNo <= 0 )
    {
        return ;
    }
    else
    {
        for(iCnt = 1 ; iCnt <= iNo *2; iCnt++)
        {
            if(iCnt % 2 == 0 )
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