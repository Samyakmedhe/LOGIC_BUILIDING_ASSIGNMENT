#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[] , int iLength)
{
    int iCnt = 0, bFlag = false; 
    for(iCnt = 0 ; iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bFlag = 1;
            break;
        }
    }
    if(bFlag == 1)  
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int iSize = 0 , iCnt = 0 ;
    int *ptr = NULL;
    bool bRet = false;

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
    bRet = Check(ptr,iSize);
    if(bRet == true)
    {
        printf("11 is present...\n");

    }
    else
    {
        printf("11 is Absent...\n");
    }
    free(ptr);

    return 0 ;
}