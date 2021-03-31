#include "Header.h"

int Count(int iNo)       
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
        
        if(iDigit < 6)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
}









