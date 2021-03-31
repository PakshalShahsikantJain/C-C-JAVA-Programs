#include <stdio.h>

typedef int BOOL;

#define TRUE 1 
#define FALSE 0

BOOL CHKAlpha(char ch)
{
    if((ch >= 'A')&&(ch <= 'Z'))
    {
        return TRUE;
    }
    else if ((ch >= 'a')&&(ch <= 'z'))
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet = CHKAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It Is Character\n");
    }
    else
    {
        printf("It Is Not Character\n");
    }
    
    return 0;  
}