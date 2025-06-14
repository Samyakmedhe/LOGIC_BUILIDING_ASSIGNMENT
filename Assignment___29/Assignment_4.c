

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int CountChar(char Fname[] , char ch)
{
    int iRet = 0 , iCnt = 0 , iCount = 0 , fd = 0 ;
    char Buffer[1024];

    fd = open(Fname, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file : ");
        return -1;
    } 
    while((iRet = read(fd , Buffer, sizeof(Buffer))) > 0)
    {
        for(iCnt = 0; iCnt < iRet ; iCnt++)
        {
            if(Buffer[iCnt] == ch)
            {
                iCount++;

            }
        }
    }
    close(fd);
    return iCount;
}
int main()
{

    char FName[20] = {'\0'};
    char cValue;

    int iRet = 0;

    printf("Enter File name : ");
    scanf("%s",FName);

    printf("Enter character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(FName,cValue);
    printf("Frequency of %c is :  %d\n",cValue, iRet);
    return 0 ;
}