
#include<stdio.h>
void Pattern(int iRow , int iCol)
{
    int i = 0, j = 0 ;
    
    for( i = 1; i <= iRow; i++)
    {
        int iCnt = 1;
        if(i % 2 == 0)
        {
            iCnt = 1;    
        }
        else
        {
            iCnt = 2;
        }
        for(j = 1 ; j<= iCol ;j++)
        {
            printf("%d\t",iCnt);
            iCnt = iCnt + 2 ;
        }
        printf("\n");
    }
    
}
int main()
{   
    int iValue1 = 0  , iValue2 = 0;
    printf("Enter number of Rows : ");
    scanf("%d", &iValue1);

    printf("Enter number of Colomns : ");
    scanf("%d", &iValue2);
    Pattern(iValue1, iValue2);

    return 0;
}