#include<stdio.h>

typedef int UINT;
int Count(UINT iNo)
{
    UINT iMask = 0X00000900;

    UINT iResult = 0;

    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    iRet = Count(iNo);

    printf("%d",iRet);

    return 0;
    
}

