#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    int iCheck = 0;
    int iMask = 0X00000380;
    if(iNo < 0)
    {
        iNo = -iNos;
    }

    iCheck = iNo & iMask;

    if(iCheck == iMask)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);
    if(bRet == TRUE)
    {
        printf("7 and 8 and 9 Bit on\n");
    }
    else
    {
      printf("They are OFF\n");
    }

    return 0;
}