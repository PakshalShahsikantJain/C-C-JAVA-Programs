#include "Header.h"

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        int iNo = -iNo;
    }

    for (i = 0; i < iNo ; i++)
    {
        if (i % 2==0 )
        {
            printf("%d\t",i);
        }
    }
}