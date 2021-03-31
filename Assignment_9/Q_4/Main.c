#include<stdio.h>

int iCnt = 0;

void Display(int iNo)
{
    for(iCnt = 1; iCnt < iNo;iCnt++)
    {
        if((iCnt % 2)==1)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}