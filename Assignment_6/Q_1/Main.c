#include "Header.h"

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = DisplayDigit(iValue);

    return 0;
}