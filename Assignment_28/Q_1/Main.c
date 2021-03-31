#include<stdio.h>

void DisplayDigit(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        str++;
        if((str[i] >= '0')&&(str[i] <= '9'))
        {
            printf("%s\n",str);      
        }
        
    }
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}