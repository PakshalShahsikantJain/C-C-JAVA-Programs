#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char name[30] = {'\n'};
    int fd = 0;


    printf("Enter name\n");
    scanf("%s",name);

    fd = creat(name,0777);
    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File Created Successfully With fd %d\n",fd);
    }

    close(fd);
    return 0;
}