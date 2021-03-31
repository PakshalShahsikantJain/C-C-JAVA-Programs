#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt != 0;iCnt--)
    {
        if((iCnt % 2)==0)
        {
            iMult = iMult * iCnt;
        }
        
    }

    return iMult;

}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Factorial Is %d",iRet);

    return 0;
}