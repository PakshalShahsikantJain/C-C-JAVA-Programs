#include "Header.h"

int CountRange(int iNo)       
{
    int iCnt = 0;                           
    int iDigit = 0;                          
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit % 10)==0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
}









