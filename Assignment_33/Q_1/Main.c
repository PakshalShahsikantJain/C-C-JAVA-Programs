#include<stdio.h>

int ToggelBit(int iNo,int iPos)
{
    int iMask = 0X00000001;

    int iResult = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    if((iPos < 1)||(iPos > 32))
    {
        return 0;
    }

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    int iValue = 0;
    int iPos = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    printf("Enter Position To Check\n");
    scanf("%d",&iPos);

    iRet = ToggelBit(iValue,iPos);

    printf("Modified Number Is %d",iRet);

    return 0;
}