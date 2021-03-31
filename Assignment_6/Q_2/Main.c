#include "Header.h"

int main()
{
    int iValue = 0;

    BOOL bRet = FALSE;

    printf("Please Enter Number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if (bRet == TRUE)
    {
        printf("It Contains Zero");
    }

    else
    {
        printf("It Does Not Contains Zero");
    }

    return 0;
    
    
}