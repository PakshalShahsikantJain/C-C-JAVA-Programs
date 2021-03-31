#include "Header.h"

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n",iRet);

    return 0;   
}