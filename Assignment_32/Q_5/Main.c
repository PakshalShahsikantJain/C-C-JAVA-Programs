#include<stdio.h>

typedef long int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(long int iNo)
{
    long int iCheck = 0;
    long int iMask = 0X800000001;
    if(iNo < 0)
    {
        iNo = -iNo;
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
    long int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);
    if(bRet == TRUE)
    {
        printf("1 and 32 Bit on\n");
    }
    else
    {
      printf("There are OFF\n");
    }

    return 0;
}