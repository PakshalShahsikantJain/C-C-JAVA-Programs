#include <stdio.h>

void Pattern(int iNo1,int iNo2,char str[])
{
    int i = 0;
    int j = 0;

    for(i = 1;i<=iNo1;i++)
    {
        for(j = 1;j <= iNo2;j++)
        {
            printf("%s\t",str);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    char arr[30]; 

    printf("Enter Row Number\n");
    scanf("%d",&iValue1);

    printf("Enter Col Number\n");
    scanf("%d",&iValue2);

    printf("Enter String you Want To Display\n");
    scanf(" %[^'\n']s",arr);

    Pattern(iValue1,iValue2,arr);

    return 0;
}