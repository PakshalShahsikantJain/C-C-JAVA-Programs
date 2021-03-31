#include<stdio.h>

void Display(int No)
{
    static int i = 0;

    if(i <= No)
    {
        printf("%d",No);
        i++;
        Display(No)
    }
}

int main()
{
    int No = 0;

    printf("Enter Number for iteration\n");
    scanf("%d",No);
    Display(No);

    return 0;
}