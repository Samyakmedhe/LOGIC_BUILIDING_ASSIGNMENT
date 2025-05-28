#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[] , int iLength,int iNo)
{
    int iCnt = 0 , iMulti = 1 ;
    for(iCnt = 0 ; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iMulti = iMulti * Arr[iCnt];
        }
        
    
    }
    if(iMulti == 1)
    {
        iMulti = 0 ;
    }
    return iMulti;
}
int main()
{
    int iSize = 0 , iCnt = 0 ,iValue = 0 ;
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

    iRet = Product(ptr , iSize, iValue); 
    printf("Result is : %d \n",iRet);

    
    free(ptr);

    return 0 ;
}