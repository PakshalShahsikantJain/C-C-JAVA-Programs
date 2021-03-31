#include<stdio.h>

int WordCount(char *str)
{
    int iCnt = 0;

    if(str == NULL)
    {
        return -1;  
    }

    while((*str == ' ') && (*str!= '\0'))
    {
        iCnt++;
    }
    str++;
    return iCnt;
}

int main()
{
    char arr[30];
    int iRet = 0;

    printf("Please Enter String\n");
    scanf("%[^'\n']s",arr);

    iRet = WordCount(arr);
    printf("Number of Words Are %d\n",iRet);

    return 0;
}