#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[] , int iLength, int iStart , int iEnd)
{
    int iCnt = 0 , iCount1 = 0;
    for(iCnt = 0 ; iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t\n",Arr[iCnt]);
        }

    }

}
int main()
{
    int iSize = 0 , iCnt = 0, iStart = 0 , iEnd = 0 ;
   
    int *ptr = NULL;

    printf("Enter number of Elements :  ");
    scanf("%d",&iSize);
    printf("Enter number the Starting point :  ");
    scanf("%d",&iStart);
    printf("Enter number the Ending point :  ");
    scanf("%d",&iEnd);


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

    Range(ptr , iSize, iStart , iEnd); 
    

    free(ptr);

    return 0 ;
}