

#include<stdio.h>
void Pattern(int iRow , int iCol)
{
    int i = 0, j = 1,iCnt = 1  ;

    for( i = j ; i <= iRow; i++)
    {
        for(j = 1 ;j<= iCol;j++, iCnt++)
        {
            printf("%d\t",iCnt);
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