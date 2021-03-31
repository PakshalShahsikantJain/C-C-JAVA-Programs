#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(int iNo)
{
    int iMask =0X00008000;
    int iCheck = 0;
    
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);

    if(bRet == TRUE)
    {
        printf("Fifteen Bit is on\n");
    }
    else
    {
        printf("It Is Off\n");
    }

    return 0;
}