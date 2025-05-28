#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[] , int iLength)
{
    int iCnt = 0 , iMin = Arr[0], iMax = Arr[0], iDiff = 0 ;
    for(iCnt = 0 ; iCnt < iLength;iCnt++)
    {
        if(iMin >= Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
        else if (iMax <= Arr[iCnt]) 
        {
            iMax = Arr[iCnt];
        }
    }
    printf("(%d - %d)\n",iMax, iMin);
    iDiff = iMax - iMin;
    return iDiff;

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

    iRet = Difference(ptr , iSize); 
    printf("Difference number is : %d \n",iRet);

    free(ptr);

    return 0 ;
}