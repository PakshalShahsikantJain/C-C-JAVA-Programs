#include<stdio.h>

int SchoolFees(int iStandard)
{
    if(iStandard < 1)
    {
        iStandard = -iStandard;
    }

    switch (iStandard)
    {
    case 1:
        printf("Amount For Standard 1 Is 8900\n");
        break;

    case 2:
        printf("Amount For Standard 2 Is 12790\n");
        break;
    
    case 3:
        printf("Amount For Standard 3 Is 21000\n");
        break;

    case 4:
        printf("Amount For Standard 4 Is 23450");
        break;

    case 0:
        printf("Thank You For Visiting our School\n");
        break;
    
    default:
        printf("\nWrong Input\n");
        break;
    }
}

int main()
{
    int iValue = 0;

    printf("Please Enter Your Standard\n");
    scanf("%d",&iValue);

    SchoolFees(iValue);

    return 0;
}