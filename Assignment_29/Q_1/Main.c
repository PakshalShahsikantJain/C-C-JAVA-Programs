#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkChar(char *str,char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {   
            break;
        }
        str++;   
    }

    if(*str == ch)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char arr[30];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Character To Search\n");
    scanf(" %c",&cValue);
    

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Contains Character\n");
    }
    else
    {
        printf("Not Contains Character\n");
    }

    return 0;
}
    