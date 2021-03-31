#include <stdio.h>

typedef int BOOL;

#define TRUE 1 
#define FALSE 0

BOOL CHKCapital(char ch)
{
    if((ch >= 'A')&&(ch <= 'Z'))
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

    bRet = CHKCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It Is Capital\n");
    }
    else
    {
        printf("It Is Not Capital\n");
    }
    
    return 0;  
}