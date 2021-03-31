#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

struct student
{
    int RollNo;
    char name[50];
    int marks;
};

void FileWrite(char *name)
{
    int fd = 0;
    int ret = 0;
    int Size = 1;
    int i = 0;

    struct student sobj;

    fd =open(name,O_WRONLY);
    if(fd == -1)
    {
        printf("Unable to open file with fd : %d\n",fd);
        return;
    }

    printf("\nEnter Number of Students\n");
    scanf("%d",&Size);

    for(i = 1;i<=Size;i++)
    {
        
        printf("Enter Roll Number of Student :\n");
        scanf("%d",&sobj.RollNo);

        printf("Enter Name of Student :\n");
        scanf("%s",&sobj.name);

        printf("Enter Marks obtain by Student :\n");
        scanf("%d",&sobj.marks);
        printf("-----------------------------------------------------\n");

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
    return 0;
}