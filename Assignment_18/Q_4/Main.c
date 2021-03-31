#include <stdio.h>

void Pattern(int iNo1,int iNo2)
{
    int i = 0;
    int j = 0;

    if(iNo1 < 0)                //Updator
    {
        iNo1 = -iNo1;
    }
    if(iNo2 < 0)                //Updator
    {
        iNo2 = -iNo2;
    }

    if(iNo1 != iNo2)            //Filter
    {
        printf("ERROR : Invalid Argument\n");
        return;
    }

    for(i = 1;i <= iNo1;i++)
    {
        for(j = 1; j <= iNo2; j++)
        {
            if((i==3)&&(j==4)||(i==2)&&(j==3)||(i==3)&&(j==2)||(i==4)&&(j==3))
            {
                printf("  \t");
            }
            else if((i*j==8)||(i*j==10)||(i*j==15)||(i*j==20))
            {
                printf("  \t");
            }

            else
            {
                printf("*\t");
            }

        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Row Number\n");
    scanf("%d",&iValue1);

    printf("Enter Column Number\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}