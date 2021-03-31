#include <stdio.h>

void Pattern(int iNo1,int iNo2)
{
    int i = 0;
    int j = 0;

    for(i = 1;i<=iNo1;i++)
    {
        for(j = 1;j <= iNo2;j++)
        {
            if(i%2 == 1)
            {
                printf("%d\t",j);
            }
            else 
            {
                printf("%d\t",j+4);
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

    printf("Enter Col Number\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}