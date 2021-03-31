#include<stdio.h>

int StrCpyCap(char *Str1,char *Str2)
{
    if((Str1 == NULL)&&(Str2 == NULL))
    {
        return -1;
    }

    while(*Str1 != '\0')
    {
        if((*Str1 >= 'A')&&(*Str1 <= 'Z'))
        {
            *Str2 = *Str1;
            Str2++;
        }
        Str1++;
    }

    *Str2 = '\0';
}

int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};

    printf("Enter String \n");
    scanf("%[^'\n']s",arr);

    StrCpyCap(arr,brr);

    printf("String After Copy is %s",brr);

    return 0;
}