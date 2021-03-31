#include "Header.h"

int i = 0;

void NonFact(int iNo)
{
    for(i = 1; i < iNo  ; i++)
    {
        if((iNo % i)>0)
        {
            printf("%d\t",i);
        }        
    }
}