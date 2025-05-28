#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[] , int iLength)
{
    int iCnt = 0 , iNo = 0, iSum = 0;
    for(iCnt = 0 ; iCnt < iLength;iCnt++)
    {
        iNo = Arr[iCnt];

        iSum = 0 ;
        while(iNo != 0)
        {
            iSum += iNo % 10 ;
            iNo = iNo / 10;

        }
        
        printf("%d ",iSum);
    }
    printf("\n");
    
  

}
int main()
{
    int iSize = 0 , iCnt = 0 ;
   
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

    Digits(ptr , iSize); 

    free(ptr);

    return 0 ;
}