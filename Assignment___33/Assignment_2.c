#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
void CommonBit(UINT iNo1 ,UINT iNo2 )
{
    UINT iResult = iNo1 & iNo2;

    int iCount = 1;
    while(iResult != 0)
    {
        if(iResult & 1)
        {
            printf("%d\t",iCount);
        }
        iResult = iResult >>1;
        iCount++;
    }
    printf("\n");
   
}
int main()
{
    UINT iValue1 = 0, iValue2 = 0;
    
    int iRet = 0;
    printf("Enter First number : ");
    scanf("%d",&iValue1);
    printf("Enter Second number : ");
    scanf("%d",&iValue2);

    CommonBit(iValue1, iValue2);
   
    

    return 0 ;
}