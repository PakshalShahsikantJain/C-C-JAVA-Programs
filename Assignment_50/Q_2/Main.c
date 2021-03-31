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

void FileRead(char *name)
{
    int fd = 0;
    int ret = 0;
    int Size = 0;
    int i = 0;

    struct student sobj;

    fd = open(name,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to Read file with fd : %d",fd);
        return;
    }
    
    printf("\nData from File is : \n");
    printf("-----------------------------------------------------\n");
    
    while((ret = read(fd,&sobj,sizeof(sobj)))!= 0)
    {
        printf("\nName of Student is : %s\n",sobj.name);
        printf("\nRoll Number of Student is :%d\n",sobj.RollNo);
        printf("\nMarks Obtain by Student : %d\n",sobj.marks);

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

    FileRead(name);
    return 0;
}