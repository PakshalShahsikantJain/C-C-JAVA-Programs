#include<stdio.h>

int iCnt = 0;

void Pattern(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo;iCnt++)
    {
        printf("$ *\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}