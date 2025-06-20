#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
int CountOne(UINT iNo)
{
    int iCount = 0;
    while(iNo != 0)
    {
        if(iNo & 1)
        {
            iCount++;
        }
        iNo = iNo >>1;
    }
    return iCount;
}
int main()
{
    UINT iValue = 0, iLocation = 0;
    
    int iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountOne(iValue);
    printf("Count of 1 is : %d\n",iRet);
    

    return 0 ;
}