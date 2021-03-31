#include "Header.h"

int CountTwo(int iNo)       
{
    int iCnt = 0;                           
    int iDigit = 0;  

    if (iNo < 0 )
    {
        iNo = -iNo;
    }                        
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 2)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
}









