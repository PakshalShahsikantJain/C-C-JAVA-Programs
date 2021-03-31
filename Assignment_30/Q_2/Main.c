#include<stdio.h>

int StrNCpy(char *Str1,char *Str2,int iNo)
{
    int iCnt = 10;
    if((Str1 == NULL)||(Str2 == NULL))
    {
        return -1;
    }

    while((*Str1 != '\0')&&(iCnt != 0))
    {
        *Str2 = *Str1;
        Str1++;
        Str2++;
        iCnt--;
    }
    *Str2 = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrNCpy(arr,brr,10);

    printf("String After Copy is %s",brr);

    return 0;
}