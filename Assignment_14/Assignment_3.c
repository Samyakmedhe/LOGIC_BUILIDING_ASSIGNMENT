
#include<stdio.h>
void Pattern(int iRow , int iCol)
{
    int i = 0, j = 0, iCnt = 1 ;
    char ch = 'a';
    
    for( i = 1; i <= iRow; i++)
    {
        int iCnt = 1;
       
        for(j = 1 , ch = 'a'; j<= iCol ;j++,ch++, iCnt++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",iCnt);    
            }
            else
            {
               printf("%c\t",ch);
            }
            
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