#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int Display(char FNAME[])
{
    int fd = 0;
    char arr[100] = {'\n'};
    int Ret = 0;
    int Size = 0;

    fd = open(FNAME,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to Read File\n");
        return -1;
    }
    while ((Ret = read(fd,arr,100))!= 0)
    {
        Size++;
    }
    return Size;
    close(fd);
}

int main()
{
    char name[50] = {'\n'};
    int iRet = 0;

    printf("Enter File Name to Display\n");
    scanf("%s",name);

    iRet = Display(name);
    printf("File Size is %d",iRet);
    return 0;
}