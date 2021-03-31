#include "Header.h"

int main()
{
    int iValue = 0;             
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = CountTwo(iValue);
    
    printf("The Frequency of Two is :%d",iRet);
    
    return 0;
}