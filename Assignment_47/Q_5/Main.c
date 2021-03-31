#include<stdio.h>

void  Display(int No)
{
    int Digit = 0;
    if(No != 0)
    {
        Digit = No % 10;
        printf("%d",Digit);
        No = No/10;
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