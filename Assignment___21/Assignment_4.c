#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[] , int iLength)
{
    int iCnt = 0 , iCount1 = 0;
    for(iCnt = 0 ; iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt] >= 100)&&(Arr[iCnt] <= 999))
        {
            printf("%d ",Arr[iCnt]);
        }
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