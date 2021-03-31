#include<stdio.h>

int CountSmall(char *str)
{
    int Cnt = 0;
    while (*str != 0)
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            Cnt++;          
        }
        str++;
    }

    return Cnt;
}

int main()
{
    char arr[30];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("Number of Small Characters are %d",iRet);

    return 0;
}