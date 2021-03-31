#include <stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt != 0;iCnt--)
    {
        iMult = iMult * iCnt;
    }

    return iMult;

}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial Is %d",iRet);

    return 0;
}