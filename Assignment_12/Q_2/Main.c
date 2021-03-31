#include <stdio.h>

int DollarToInr(int iNo)
{
    int iConversion = 0;

    iConversion = iNo * 70;

    return iConversion;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = DollarToInr(iValue);

    printf("Conversion of DollarToInr is :%d \n",iRet);

    return 0;
}

