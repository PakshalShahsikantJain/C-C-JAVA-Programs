#include<stdio.h>

float CalculateBill(int iAmount)
{
    int iDiscount = 0;

    if(iAmount < 1)
    {
        iAmount = -iAmount;
    }

    if(iAmount < 500)
    {
        printf("Sorry There is No Offer\n");
    }
    if((iAmount > 500)&&(iAmount < 1500))
    {
        printf("You Get Discount of 10 Percent OFF\n");
        iDiscount = 0.10 * iAmount;
    }
    else if(iAmount > 1500)
    {
        printf("You Get Discount of 15 Percent OFF \n");
        iDiscount = 0.15 * iAmount;
    }

    return iAmount-iDiscount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Bill Amount\n");
    scanf("%d",&iValue);

    iRet = CalculateBill(iValue);
    printf("\nYour Final Bill Amount Is %d\n",iRet);
    printf("\nThank You For Visiting Our Hotel\n");

    return 0;
}