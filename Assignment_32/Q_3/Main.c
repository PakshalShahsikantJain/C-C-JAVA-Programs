#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    int iCheck = 0;
    int iMask = 0X10208080;
    if(iNo < 0)
    {
        return -1;
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
        printf("7 and 15 and 21 and 28 Bit on\n");
    }
    else
    {
      printf("There are OFF\n");
    }

    return 0;
}