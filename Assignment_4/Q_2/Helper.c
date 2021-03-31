#include "Header.h"

int i = 0;

void FactRev(int iNo)
{
    for(i = iNo/2; i > 0 ; i--)
    {
        if((iNo%i)==0)
        {
            printf("%d\t",i);
        }
    }
}