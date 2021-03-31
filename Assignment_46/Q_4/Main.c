#include<stdio.h>

int Fact(int No)
{
    if(No == 1)
    {
        return 1;
    }
    else
    {
        return(No * Fact(No-1));
    }
}

int main()
{
    int No = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&No);

    iRet = Fact(No);
    printf("%d",iRet);

    return 0;
}