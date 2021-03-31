#include<stdio.h>

float SquareMeter(float fNo)
{
    if(fNo < 0)
    {
        fNo = -fNo;
    }
    float fConversion = 0;

    fConversion = fNo * 0.0929;

    return fConversion;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Area in Square Feet\n");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("Conersion of Square Feet to Square Meter is %f",dRet);

    return 0;
}