#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[] , int iLength)
{
    int iCnt = 0 , iCount = 0 ;
    for(iCnt = 0 ; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount = iCount + 1;
        }
    }
    return iCount;

}
int main()
{
    int iSize = 0 , iCnt = 0 ;
    int iRet = 0 ;
    int *ptr = NULL;

    printf("Enter number of Elements :  ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to locate memory : \n");
        return -1;
    }

    printf("Enter %d numbers : \n",iSize);
    for(iCnt = 0  ; iCnt < iSize ; iCnt++)
    {
        printf("Enter %d numbers : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountEven(ptr , iSize); 
    printf("Result is : %d \n",iRet);

    free(ptr);

    return 0 ;
}