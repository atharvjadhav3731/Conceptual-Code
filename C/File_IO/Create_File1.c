#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd = 0;

    fd = creat("Demo.txt",0777);

    if(fd == 1)
    {
        printf("Unable to create the fil \n");
        return -1;

    }
    else
    {
        printf("Create the file with fd :%d \n",fd);
        return 0;
    }

    return 0;
}