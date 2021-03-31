#include "Header.h"

int main()
{
    int iValue = 0;

    BOOL bRet = FALSE;

    printf("Please Enter Number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if (iValue + 0 == 0)
    {
        printf("It Contains Zero",iValue);
    }

    else
    {
        printf("It Does Not Contains Zero",iValue);
    }
    
    
}