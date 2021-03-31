#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char name[30] = {'\0'};
    int fd = 0;

    printf("Enter file name\n");
    scanf("%s",name);

    fd = open(name,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open File\n");
    }
    else
    {
        printf("File Opened Successfully With fd %d\n",fd);
    }

    close(fd);
    return 0;
}