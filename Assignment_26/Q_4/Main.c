#include <stdio.h>

typedef int BOOL;

#define TRUE 1 
#define FALSE 0

BOOL CHKSpecial(char ch)
{
    if((ch >= '!')&&(ch <= '/'))
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

    bRet = CHKSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It Is Special Character\n");
    }
    else
    {
        printf("It Is Not \n");
    }
    
    return 0;  
}   