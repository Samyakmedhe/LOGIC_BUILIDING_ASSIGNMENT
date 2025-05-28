#include<stdio.h>
#include<stdlib.h>

int FirsOcc(int Arr[] , int iLength,int iNo)
{
    int iCnt = 0 , iFound = -1 ;
    for(iCnt = 0 ; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] ==iNo)
        {
            iFound = 1;
            break;
        }
    
    }

    return iFound;
}
int main()
{
    int iSize = 0 , iCnt = 0 ,iValue = 0 ;
    int iRet = 0 ;
    int *ptr = NULL;

    printf("Enter number of Elements :  ");
    scanf("%d",&iSize);
    printf("Enter number that you want find it :  ");
    scanf("%d",&iValue);
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

    iRet = FirsOcc(ptr , iSize, iValue);
    if(iRet == -1 )
    {
        printf("There is no such number ");
    } 
    else
    {
        printf("Result is : %d \n",iRet);

    }
    
    free(ptr);

    return 0 ;
}