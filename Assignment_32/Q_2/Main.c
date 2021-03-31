#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    int iCheck = 0;
    int iMask = 0X00040020;
    if(iNo < 0)
    {
        return -1;
    }

    iCheck = iNo & iMask ;

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
        printf("5 and 18 Bit on \n");
    }
    else
    {
        printf("it Is OFF\n");
    }

    return 0;
}