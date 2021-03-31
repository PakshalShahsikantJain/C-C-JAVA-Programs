#include "Header.h"

int iCnt = 0;

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    
    for(iCnt=1; iCnt <= 2*iNo ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}