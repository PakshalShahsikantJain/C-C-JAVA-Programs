#include <stdio.h>

typedef int BOOL;

#define TRUE 1 
#define FALSE 0

BOOL CHKDigit(char ch)
{
    if((ch >= '0')&&(ch <= '9'))
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

    bRet = CHKDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It Is Digit\n");
    }
    else
    {
        printf("It Is Not Digit\n");
    }
    
    return 0;  
}