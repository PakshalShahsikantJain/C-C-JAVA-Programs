#include <stdio.h>

int RangeDisplay(int iStart,int iEnd)
{
    int iNo = iStart;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo;iCnt <= iEnd; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}