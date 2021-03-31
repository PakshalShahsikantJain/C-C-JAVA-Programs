#include<stdio.h>

void Dispaly(int No)
{
    if(No < 0)
    {
        No = - No;
    }

    if(No > 0)
    {
        printf("%d\t *\t",No);
        No--;
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