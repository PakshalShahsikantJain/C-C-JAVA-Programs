#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

struct student
{
    int RollNo;
    int Marks;
    char name[50];
};

void FileWrite(char *name)
{
    int Size = 0;
    int i = 0;
    int ret = 0;
    int fd = 0;

    struct student sobj;
    fd = open(name,O_WRONLY);
    if(fd == -1)
    {
        printf("Unable to open File with fd : %d\n",fd);
        return;
    }

    printf("Enter Number's of Student\n");
    scanf("%d",&Size);

    printf("-----------------------------------------------------------------------------\n");

    for(i = 1;i<= Size;i++)
    {
        printf("Enter Name of Student\n");
        scanf("%s",&sobj.name);

        printf("Enter Roll Number of Student\n");
        scanf("%d",&sobj.RollNo);

        printf("Enter Marks Obtain by Student\n");
        scanf("%d",&sobj.Marks);

        printf("-----------------------------------------------------------------\n");

        write(fd,&sobj,sizeof(sobj));
    }
    close(fd);
}

void FileRead(char *name)
{
    int Size = 0;
    int i = 0;
    int ret = 0;
    int fd = 0;

    struct student sobj;
    fd = open(name,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open File with fd : %d\n",fd);
        return;
    }

    printf("Data From File is :\n");
    printf("-----------------------------------------------------------------\n");

    while((ret = read(fd,&sobj,sizeof(sobj)))!= 0)
    {
        printf("\nMarks Obtain by Student is :%d\n",sobj.Marks);
        printf("------------------------------------------------------------------\n");

        write(fd,&sobj,sizeof(sobj));
    }
    close(fd);
}

int main()
{
    char name[20];

    printf("Enter File Name\n");
    scanf("%s",name);

    FileWrite(name);
    FileRead(name);

    return 0;
}