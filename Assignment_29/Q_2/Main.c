#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CountChar(char *str,char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {   
            iCnt++;
        }
        str++;   
    }
    return iCnt;
}

int main()
{
    char arr[30];
    char cValue = '\0';
    int  iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Character To Search\n");
    scanf(" %c",&cValue);
    

    iRet = CountChar(arr,cValue);
    printf("%d",iRet);

    return 0;
}
    