#include<stdio.h>

int KiloMeterToMeter(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iConversion = 0;

    iConversion = iNo * 1000;

    return iConversion;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter KiloMeter\n");
    scanf("%d",&iValue);

    iRet = KiloMeterToMeter(iValue);

    printf("Conersion KM To M is %d",iRet);

    return 0;
}