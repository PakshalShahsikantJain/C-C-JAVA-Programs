#include "Header.h"

int iMult = 0;

int Multiply(int iNo1,int iNo2,int iNo3)
{
    if (iNo1==0)
    {
        return 0;
    }

    else if((iNo2==0)&&(iNo3==0))
    {
        return 0;
    }

    iMult = iNo1 * iNo2 * iNo3;

    return iMult;
}