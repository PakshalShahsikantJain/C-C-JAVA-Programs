#include "Header.h"

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultFactor(iValue);
    printf("%d",iRet);
    
    return 0;
}