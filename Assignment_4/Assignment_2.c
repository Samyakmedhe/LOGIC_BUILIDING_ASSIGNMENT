



#include<stdio.h>

void FactRev(int iNo )
{
    int iCnt = 0;
 
    for(iCnt = iNo - 1 ; iCnt >=1 ; iCnt--)
    {
        if(iNo % iCnt == 0)
        {             
            printf(" %d ",iCnt);
            
        }
    }

    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number to Print Reverse Factor  : ");
    scanf("%d",&iValue);

    FactRev(iValue);
    return 0 ;
}