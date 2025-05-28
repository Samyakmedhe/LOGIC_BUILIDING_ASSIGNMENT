#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[] , int iLength)
{
    int iCnt = 0 , iCount1 = 0,iCount2 = 0, Frequency = 0 ;
    for(iCnt = 0 ; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount1 = iCount1 + 1;
        }
        else 
        {
            iCount2 = iCount2 + 1;
        }
    }
    Frequency = iCount1 - iCount2;
    printf("(%d - %d)\n",iCount1,iCount2);
    return Frequency;

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

    iRet = Frequency(ptr , iSize); 
    printf("Result is : %d \n",iRet);

    free(ptr);

    return 0 ;
}