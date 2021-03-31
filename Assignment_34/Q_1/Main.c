#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckPos(int iNo ,int iPos)
{
    int iCnt = 0;
    int iRem = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iRem = iNo % 2;
        iCnt++;
        if(iCnt == iPos)
        {
            break;
        }
        iNo = iNo/2;
    }
    if((iCnt == iPos)&&(iRem == 1))
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
    int iValue1 = 0;
    BOOL bRet = FALSE;
    int iValue2 = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue1);

    printf("Enter Position Number\n");
    scanf("%d",&iValue2);

    bRet = CheckPos(iValue1,iValue2);

    if(bRet == TRUE)
    {
        printf("Valid\n");
    }
    else
    {
        printf("InValid\n");
    }

    return 0;
}
