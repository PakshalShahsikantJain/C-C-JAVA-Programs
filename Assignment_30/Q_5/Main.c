#include<stdio.h>

int StrCat(char *Str1,char *Str2)
{
    if((Str1 == NULL)&&(Str2 == NULL))
    {
        return -1;
    }

    while(*Str2 != '\0')
    {
        Str2++;
    }

    *Str2 = ' ';
    Str2++;

    while(*Str1 != '\0')
    {
        *Str2 = *Str1;
        Str1++;
        Str2++;
    }

    *Str2 = '\0';
}

int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};

    printf("Enter First String \n");
    scanf("%[^'\n']s",arr);

    printf("Eneter Second String \n");
    scanf(" %[^'\n']s",brr);

    StrCat(arr,brr);

    printf("String After Copy is %s\n",brr);

    return 0;
}