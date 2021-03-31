#include <stdio.h>

int Display(char ch)
{
    if((ch >= 'A')&&(ch <= 'Z'))
    {
        printf("%d %x %o\n",ch,ch,ch);  
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter Character\n");
    scanf("%c",&cValue);

    Display(cValue);
    
    return 0;  
}