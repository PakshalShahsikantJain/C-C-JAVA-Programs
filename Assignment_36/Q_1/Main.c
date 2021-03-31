#include<stdio.h>

void StrnCat(char *str,char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }

    while(*str != '\0')
    {
        *dest = *str;
        str++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter First String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter second String\n");
    scanf(" %[^'\n']s",brr);

    StrnCat(arr,brr);

    printf("String After Concatination is %s\n",brr);

    return 0;
    
}