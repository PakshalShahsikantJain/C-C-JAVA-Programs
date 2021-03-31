#include<stdio.h>

int strCpy(char *Src,char *Dest)
{
    if((Src == NULL)||(Dest == NULL))
    {
        return -1;
    }

    while(*Src != '\0')
    {
        *Dest = *Src;
        Src++;
        Dest++;
    }

    *Dest = '\0'; 
}

int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};

    printf("Enter String \n");
    scanf("%[^'\n']s",arr);

    strCpy(arr,brr);

    printf("String After Copy is %s",brr);

    return 0;
}