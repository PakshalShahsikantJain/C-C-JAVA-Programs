#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef int UINT;

BOOL CheckOnOFF(UINT iNo,UINT iPos1,UINT iPos2)
{
    UINT Mask1 = 0X00000001;
    UINT Mask2 = 0X00000001;

    int iResult1 = 0;
    int iResult2 = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }

    if((iPos1 < 1)||(iPos1 > 32))
    {
        return FALSE;
    }
    
    if((iPos2 < 1)||(iPos2 > 32))
    {
        return FALSE;
    }

    Mask1 = Mask1 << (iPos1-1);
    Mask2 = Mask2 << (iPos2-1);

    iResult1 = iNo & Mask1;
    iResult2 = iNo & Mask2;

    if((iResult1 == Mask1)&&(iResult2 == Mask2))
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
    int iPos1 = 0;
    int iPos2 = 0;
    BOOL bRet = FALSE;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    printf("Enter First Position To Check\n");
    scanf("%d",&iPos1);

    printf("Enter Second Position To Check\n");
    scanf("%d",&iPos2);

    bRet = CheckOnOFF(iNo,iPos1,iPos2);

    if(bRet == TRUE)
    {
        printf("Bit is on\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }

    return 0;
}