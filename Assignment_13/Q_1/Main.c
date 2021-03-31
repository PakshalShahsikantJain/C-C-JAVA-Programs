#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if(iCnt==1)
        {
            printf("A\t");
        }
        else if (iCnt == 2)
        {
            printf("B\t");
        }
        
        else if(iCnt == 3)
        {
            printf("C\t");
        }
        
        
        else if(iCnt == 4)
        {
            printf("D\t");
        }

        
        else if(iCnt == 5)
        {
            printf("E\t");
        }
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}