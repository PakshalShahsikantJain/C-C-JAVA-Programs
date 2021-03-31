#include "Header.h"

int main()
{
    int iValue = 0;             
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = CountEven(iValue);
    
    printf("%d\n",iRet);
    
    return 0;
}