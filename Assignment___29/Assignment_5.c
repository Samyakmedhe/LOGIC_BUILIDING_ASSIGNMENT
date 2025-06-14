

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


void DisplayN(char Fname[] ,  int iSize)
{
    int iRet = 0 , fd = 0 ;
    char Buffer[1024];

    fd = open(Fname, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file : ");
        return;
    } 
    iRet = read(fd , Buffer , iSize);
    if(iRet > 0)
    {
        write(1, Buffer, iRet);
    }
    close(fd);
   
}
int main()
{

    char FName[20] = {'\0'};
    int iValue;

    int iRet = 0;

    printf("Enter File name : ");
    scanf("%s",FName);

    printf("Enter Number of character to read : ");
    scanf("%d",&iValue);

    DisplayN(FName,iValue);
    
    return 0 ;
}