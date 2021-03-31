#include<stdio.h>

void Display(int No)
{
    static int i = 1;

    if(No < 0)
    {
        No = -No;
    }
    if(i <= No)
    {
        printf("%c\t",i+64);
        i++;
        Display(No);
    }
}

int main()
{
    int No = 0;

    printf("Enter Number\n");
    scanf("%d",&No);

    Display(No);

    return 0;
}