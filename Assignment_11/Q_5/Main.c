#include <stdio.h>

int RangeDisplayRev(int iStart,int iEnd)
{
    int iNo = iStart;
    int iCnt = 0;

    for (iCnt = iEnd;iCnt >= iNo; iCnt--)
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

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}