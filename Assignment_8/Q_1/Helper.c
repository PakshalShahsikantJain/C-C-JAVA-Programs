#include "Header.h"

void Number(int iNo)
{


    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo<50)
    {
        printf("Number Is small\n");
    }

    if((iNo>50)&&(iNo < 100))
    {
        printf("Number is Medium\n");
    }

    else if(iNo > 100)
    {
        printf("Number is Large\n");
    }
    
}