#include<stdio.h>

void DisplayASCII()
{
    int i = 0;
    char ch = 0;

    for(i = 0;i <= 255;i++)
    {
        printf(" %d  %x  %o  %c\n",ch,ch,ch,ch);
        ch = ch+1;
    }
}

int main()
{
    DisplayASCII();

    return 0;
}