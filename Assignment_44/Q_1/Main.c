#include<stdio.h>

void Display(int No)
{
    static int i = 1;

    if(i <= No)
    {
        printf("*\t",i);
        i++;
        Display(No);
    }
}

int main()
{
    int No = 0;

    printf("Please Enter Number For How Much Time You Want To Print *\n");
    scanf("%d",&No);

    Display(No);

    return 0;
}