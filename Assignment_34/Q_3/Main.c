#include<stdio.h>

int OnBit(int iNo,int iPos)
{
    int iNumber = 0;
    int iMask = 0X00000001;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if((iPos < 1)||(iPos > 32))
    {
        return -1;
    }

    iMask = iMask << (iPos  - 1);
    iNumber = iNo ^ iMask;

    return iNumber;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    int iPos = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    printf("Enter Postition To Toggel\n");
    scanf("%d",&iPos);

    iRet = OnBit(iValue,iPos);

    printf("Converted No Is %d",iRet);

    return 0;
}