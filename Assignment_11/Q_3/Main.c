#include <stdio.h>

int RangeSum(int iStart,int iEnd)
{
    int iNo = iStart;
    int iCnt = 0;
    int iSum = 0;

    if((iNo < 0)&&(iEnd < 0))
    {
        iNo = -iNo;
        iEnd = -iEnd;
    }

    for (iCnt = iNo;iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);
    
    printf("Result is %d",iRet);

    return 0;
}