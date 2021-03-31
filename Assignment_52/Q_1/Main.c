#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

struct student
{
    char name[50];
    int RollNo;
    int Marks;
};

void FileWrite(char *name)
{
    int Ret = 0;
    int fd = 0;
    int Size = 0;
    int i = 0;

    struct student sobj;

    fd = open(name,O_WRONLY);
    if(fd == -1)
    {
        printf("Unable to open File With : %d\n",fd);
        return;
    }

    printf("Enter Number's of Student\n");
    scanf("%d",&Size);

    for(i = 1;i<=Size;i++)
    {
        printf("Enter Name of Student\n");
        scanf("%s",&sobj.name);

        printf("Enter Roll Number of Student\n");
        scanf("%d",&sobj.RollNo);

        printf("Enter Marks of Student\n");
        scanf("%d",&sobj.Marks);

        write(fd,&sobj,sizeof(sobj));
    }
    close(fd);
}

void FileRead(char *name)
{
    int Ret = 0;
    int fd = 0;
    int Size = 0;
    int Max = 0;
    struct student sobj;

    fd = open(name,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open File With : %d\n",fd);
    }

    printf("Data From File is : \n");
    printf("-------------------------------------------------------------------\n");

    Max = sobj.Marks;
    while((Ret = read(fd,&sobj,sizeof(sobj)))!= 0)
    {
        if(sobj.Marks > Max)
        {
            Max = sobj.Marks;
            printf("Marks of Student is : %d\n",sobj.Marks);
        }

        write(fd,&sobj,sizeof(sobj));

        printf("-----------------------------------------------------------------------\n");
    }
    printf("Maximum Marks is %d",Max);
    close(fd);
}

int main()
{
    char name[50] = {'\0'};

    printf("Enter File Name\n");
    scanf("%s",&name);

    //FileWrite(name);
    FileRead(name);

    return 0;
}