

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int CountCapital(char FName[])
{   
    int fd = 0;
    int iRet = 0, iCount = 0 , iCnt = 0;
    char Buffer[1024];
    fd = open(FName,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file \n");
        return -1;
    }
    while((iRet = read(fd ,Buffer , sizeof(Buffer))) > 0 )
    {
        for(iCnt = 0 ; iCnt < iRet ; iCnt++)
        {
            if(Buffer[iCnt] >= 'A' && Buffer[iCnt] <= 'Z')
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
    
    char Fname [20] = {'\0'};
    int iRet = 0;

    printf("Enter the name of file that you want  to open : ");
    scanf("%s",Fname);
    iRet = CountCapital(Fname);
    printf("Count of Capital letter : %d  ",iRet);
    return 0;
}