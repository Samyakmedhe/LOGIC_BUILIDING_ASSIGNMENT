
#include<stdio.h>
void Pattern(int iNo )
{
    int iCnt = 0;
    

    for(iCnt = 1 ; iCnt <= iNo*2 ; iCnt++)
    {
        if((iCnt % 2) == 0 )
        {
            printf("%d\t",iCnt); 
        }
       
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);
    Pattern(iValue);

    return 0 ;

}




