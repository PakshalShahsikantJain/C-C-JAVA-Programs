#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int Display(char FNAME[])
{
    int fd = 0;
    char arr[100] = {'\n'};
    int Ret = 0;

    fd = open(FNAME,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to Read File\n");
        return -1;
    }
    
    printf("Data from file is\n");
    while ((Ret = read(fd,arr,100))!= 0)
    {
        write(1,arr,Ret);
        if((arr[Ret] >= 'A')&&(arr[Ret] <= 'Z'))
        {
            Ret++;
        }
    }

    return Ret;
    
    close(fd);
}

int main()
{
    char name[50] = {'\n'};
    int iRet = 0;

    printf("Enter File Name to Display\n");
    scanf("%s",name);

    iRet = Display(name);
    printf("\nNo of Capital Letters Are %d",iRet);
    return 0;
}