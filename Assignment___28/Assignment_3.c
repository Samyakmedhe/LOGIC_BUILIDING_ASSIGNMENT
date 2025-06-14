

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>



int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};
    char Buffer[20] = {'\0'};
    int iRet = 0;



    printf("Enter File name that you want to open : ");
    scanf("%s",Fname);

   
    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open File ");
        return -1;
    }
    else
    {
        while((iRet = read(fd , Buffer, 10)) != 0 )
        {
            printf("%s",Buffer);
        }
        
        close(fd);
    }



    return 0 ;
}