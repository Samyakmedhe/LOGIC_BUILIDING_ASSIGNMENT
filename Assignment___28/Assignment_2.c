

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>



int main()
{
    int fd = 0;
    char Fname[20];

    printf("Enter File name that you want to open : ");
    scanf("%s",Fname);

   
    fd = creat(Fname, 0777);
    if(fd == -1)
    {
        printf("Unable to open File ");
        return -1;
    }



    return 0 ;
}