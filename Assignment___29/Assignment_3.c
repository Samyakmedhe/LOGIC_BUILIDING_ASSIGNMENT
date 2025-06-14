#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int CountWhite(char Fname[])
{
    int fd =0 , iCnt = 0 , iCount = 0, iRet = 0;

    char Buffer[1024];

    fd = open(Fname , O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file ...");
        return -1;

    }

    while((iRet = read(fd , Buffer , sizeof(Buffer))) > 0)
    {
        for(iCnt = 0 ; iCnt < iRet ;iCnt++)
        {
            if(Buffer[iCnt] == ' ')
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
    char FName [20] = {'\0'};
    int iRet = 0;

    printf("Enter file name : ");
    scanf("%s",FName);

    iRet = CountWhite(FName);
    printf("Number of White space ar : %d\n",iRet);


    return 0;

}