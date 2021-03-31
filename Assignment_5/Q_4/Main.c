#include "Header.h"

int main()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0,iRet = 0;

    printf("Please Enter Three Numbers");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is %d",iRet);

    return 0;
}