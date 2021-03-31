#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL StrCmpX(char *src,char *dest)
{
    while ((*src != '\0')&&(*dest != '\0'))
    {
        if((*src == *dest)||(*dest == *src))
        {
            src++;
            dest++;
            break;
        }
    }

    if((*src == *dest)||(*dest == *src))
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
    char arr[50] = "Marvellous Infosystem";
    char brr[30] = "Marvellous Infosystem";
    BOOL bRet = FALSE;

    bRet = StrCmpX(arr,brr);
    if(bRet == TRUE)
    {
        printf("Both Strings are Same\n");
    }
    else
    {
        printf("They Are Different\n");
    }
    
    return 0;
}