#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef int UINT;

BOOL CheckOnOFF(UINT iNo)
{
    UINT iMask = 0X00000900;

    UINT iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    bRet = CheckOnOFF(iNo);

    if(bRet == TRUE)
    {
        printf("Nine and 12 is On\n");
    }
    else
    {
        printf("One or More Bits Are OFF\n");
    }

    return 0;
    
}

