#include <stdio.h>

double FhToCs(float fTemp)
{
    float Fahrenheit = fTemp;
    float fCelcius = 0;
    fCelcius = (Fahrenheit - 32) * 5/9;

    return fCelcius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temparature in Fahrenheit\n");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("Conversion of Fahrenheit in Celcius is %f",dRet);

    return 0;
}