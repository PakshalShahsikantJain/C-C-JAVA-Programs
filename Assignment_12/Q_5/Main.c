#include <stdio.h>

int DiffFactorial(int iNo)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    int iMult = 1;
    int iMult1 = 1;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }


    for(iCnt1 = iNo; iCnt1 != 0;iCnt1--)
    {
        if((iCnt1 % 2)==0)
        {
            iMult = iMult * iCnt1;
        }
        
    }    
    
    for(iCnt2 = iNo; iCnt2 != 0;iCnt2--)
    {
        if((iCnt2 % 2)==1)
        {
            iMult1 = iMult1 * iCnt2;
        }
        
    }
    
    iDiff = iMult - iMult1;

    return iDiff;


}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = DiffFactorial(iValue);

    printf("Difference Is %d",iRet);

    return 0;
}