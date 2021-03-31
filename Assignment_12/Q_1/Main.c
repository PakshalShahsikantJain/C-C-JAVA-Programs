#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt <= iNo;iCnt++)
    {
        printf("*\t",iCnt);
    }
    for(iCnt = 0;iCnt <= iNo;iCnt++)
    {
        printf("#\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

