#include<stdio.h>

int TouristBill(int iKilometer)
{
    int iRent = 0;

    if(iKilometer < 1)
    {
        iKilometer = -iKilometer;
    }

    if(iKilometer < 100)
    {
        iRent = iKilometer * 25;
    }
    else 
    {
        iRent = iKilometer * 15;
    }
    return iRent;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter KiloMeter You have Travelled\n");
    scanf("%d",&iValue);

    iRet = TouristBill(iValue);

    printf("Your Bill Amount is %d\n",iRet);
    printf("\nThank You For Using Our Vechicles\n");

    return 0;
}