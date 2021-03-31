#include<stdio.h>

int Sum(int No)
{
    if(No == 0)
    {
        return 0;
    }
    else
    {
        return ((No % 10) + Sum(No/10));
    }
}

int main()
{
    int No = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&No);

    iRet = Sum(No);
    printf("%d",iRet);

    return 0;
}