#include "Header.h"

int  DisplayDigit(int iNo)
{
    int iDigit = 0;
     while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
    return iDigit;
    
}