#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Frequency(int Arr[] , int iLength,int iNo)
{
    int iCnt = 0 ;
    bool bFlag = false ;
    for(iCnt = 0 ; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = 1;
            break;
        }

    }
    if(bFlag == 1)
    {
        return true;
    }
    else 
    {
        return false;

    }
    

}
int main()
{
    int iSize = 0 , iCnt = 0 , iValue = 0;
    int *ptr = NULL;
    bool bRet = false;

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

    bRet = Frequency(ptr , iSize,iValue); 
    if(bRet == true)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    free(ptr);

    return 0 ;
}