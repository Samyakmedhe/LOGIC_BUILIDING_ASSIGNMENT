#include<stdio.h>
#include<stdlib.h>

int DifferenceEvenOdd(int Arr[] , int iLength)
{
    int iSum1 = 0, iSum2 = 0, iCnt = 0 , Diff = 0 ;
    for(iCnt = 0 ; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSum1 = iSum1 + Arr[iCnt];
        }
        else 
        {
            iSum2 = iSum2 + Arr[iCnt];
        }
    }
    Diff = iSum1 - iSum2;
    printf("\t(%d - %d)\n",iSum1,iSum2);
    return Diff;

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

    iRet = DifferenceEvenOdd(ptr , iSize); 
    printf("Difference between Even Odd is : %d ",iRet);

    free(ptr);

    return 0 ;
}