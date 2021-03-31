#include <stdio.h>

typedef int BOOL;

#define TRUE 1 
#define FALSE 0

BOOL CHKSmall(char ch)
{
    if ((ch >= 'a')&&(ch <= 'z'))
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

    bRet = CHKSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It Is Small\n");
    }
    else
    {
        printf("It Is Not Small\n");
    }
    
    return 0;  
}