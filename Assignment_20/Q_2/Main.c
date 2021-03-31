#include<stdio.h>

float IncomeTax(int iAmount)
{
    int iTax = 0;
    
    if(iAmount < 1)
    {
        iAmount = -iAmount;
    }

    if(iAmount < 500000)
    {
        printf("You Don't Have To Pay Any Tax\n");
    }

    if((iAmount > 500000)&&(iAmount < 1000000))
    {
        printf("You Have To Pay Tax of About 10 Percent Of Your Annual Income\n");
        iTax = 0.10 * iAmount;
    }
    else if((iAmount > 1000000)&&(iAmount < 2000000))
    {
        printf("You Have To Pay Tax Of About 20 Percent of Your Annual Income \n");
        iTax = 0.20 * iAmount;
    }
    else if(iAmount > 2000000)
    {
        printf("You Have To Pay Tax Of About 30 Percent of Your Annual Income \n");
        iTax = 0.30 * iAmount;
    }

    return iAmount-iTax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Your Annual Income\n");
    scanf("%d",&iValue);

    iRet = IncomeTax(iValue);
    printf("\nYour IncomeTax Amount is %d\n",iRet);

    return 0;
}