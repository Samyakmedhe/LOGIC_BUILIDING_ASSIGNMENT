

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};
    char Buffer[100] = {'\0'};
    int iRet = 0;



    printf("Enter File name that you want to open : ");
    scanf("%s",Fname);
    printf("Enter String : ");
    scanf(" %[^'\n']",Buffer);

   
    fd = open(Fname,O_CREAT | O_WRONLY | O_APPEND,0777);
    iRet = write(fd , Buffer, strlen(Buffer));
    if(fd == -1)
    {
        printf("Unable to open File ");
        return -1;
    }
    
        
    write(fd,"\n",1);
           
    printf("Data appended successfully.\n");   
        
    close(fd);




    return 0 ;
}