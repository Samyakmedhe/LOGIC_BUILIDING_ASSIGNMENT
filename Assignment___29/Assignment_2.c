

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int CountSmall(char FName[])
{
    int fd = 0, iCnt = 0 , iCount , iRet = 0;

    char Buffer[1024];

    fd = open(FName, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file ...");
        return -1;
    }

    while((iRet = read(fd , Buffer , sizeof(Buffer))) > 0)
    {
        for(iCnt = 0 ; iCnt < iRet ; iCnt++)
        {
            if((Buffer[iCnt] >= 'a') && (Buffer[iCnt]<= 'z'))
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

    char Fname[20] = {'\0'};
    int iRet = 0;

    printf("Enter file name : ");
    scanf("%s",Fname);
    
    iRet = CountSmall(Fname);

    printf("Number of small character are : %d\n",iRet);
    
    

    return 0 ;


}