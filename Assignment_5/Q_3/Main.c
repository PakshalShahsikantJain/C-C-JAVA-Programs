#include "Header.h"

int main()
{
    int iValue1 = 0;

    BOOL bRet = FALSE;

    printf(" Enter  Number\n");
    scanf("%d",&iValue1);

    bRet = ChkZero(iValue1);

    if (bRet == TRUE)
    {
        printf("It Contains Zero");
    }

    else
    {
        printf("it Does Not Contains Zero");
    }
    
    
}