#include<stdio.h>

int ToggelBit(int iNo,int iPos1,int iPos2)
{
    int iMask1 = 0X00000001;
    int iMask2 = 0X00000001;

    int iResult = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    if((iPos1 < 1)||(iPos1 > 32))
    {
        return 0;
    }

    
    if((iPos2 < 1)||(iPos2 > 32))
    {
        return 0;
    }

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iResult = ((iNo ^ iMask1)||(iNo ^ iMask2));

    return iResult;
}

int main()
{
    int iValue = 0;
    int iPos1 = 0;
    int iPos2 = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    printf("Enter First Position To Check\n");
    scanf("%d",&iPos1);

    printf("Enter Second Position to Check\n");
    scanf("%d",&iPos2);

    iRet = ToggelBit(iValue,iPos1,iPos2);

    printf("Modified Number Is %d",iRet);

    return 0;
}