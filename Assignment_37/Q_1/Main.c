#include<stdio.h>

int WordCount(char arr[])
{
    int i = 0;
    int iCnt = 1;

    if(arr == NULL)
    {
       return -1;
    }

    while (arr[i] != '\0')
    {
        if((arr[i] == ' ')&&(arr[i] != '\0'))
        {
            iCnt++;
        }
        i++;
    }
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