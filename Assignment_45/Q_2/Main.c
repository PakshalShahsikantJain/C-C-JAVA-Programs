#include<stdio.h>

void Dispaly(int No)
{
    static int i = 1;

    if(No < 0)
    {
        No = -No;
    }

    if(i <= No)
    {
        printf("%d\t",i);
        i++;
        Dispaly(No);
    }
}

int main()
{
    int No = 0;

    printf("Enter Number\n");
    scanf("%d",&No);

    Dispaly(No);

    return 0; 
}