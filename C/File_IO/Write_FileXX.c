#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd = 0;
    char arr[] = "Marvellous Infosystem";
    fd = open("Hello.txt",O_RDWR | O_APPEND);
    if(fd == 1)
    {
        printf("Unable to open the fil \n");
        return -1;

    }
    else
    {
        printf("File gets Opened with fd :%d \n",fd);
        write(fd,arr,10);
        
        close(fd);
    }
    return 0;
}
