#include<stdio.h>

int Difference(char *str)
{
    int iCnt = 0;
    int i = 0;

    while(*str != 0)
    {
        if((*str >='A')&&(*str <= 'Z'))
        {
            iCnt++;
        }
        else if((*str >= 'a')&&(*str <= 'z'))
        {
            i++;
        }
        str++;
    }

    return i-iCnt;
}

int main()
{
    char arr[30];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("Difference is %d",iRet);

    return 0;
}