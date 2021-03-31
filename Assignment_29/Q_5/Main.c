#include<stdio.h>

int  StrCpyRev(char str1[],char str2[])
{
    int iStart = 0;
    int iEnd = 0;
    char temp = '\0';

    while(str1[iEnd] != '\0')
    {
        iEnd++;
    }
    iEnd--;

    while(iStart < iEnd)
    {
        temp = str1[iStart];      //Swapping 
        str1[iStart]=str1[iEnd];   //Swapping
        str1[iEnd] = temp;        //Swapping

        iStart++;
        iEnd--;
    }

    while(str1[] != '\0')
    {
        char str2[] = char str1[];
        str1++;
        str2++;
    }
    str2[] = '\0';
}

int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};

    printf("Please Enter String\n");
    scanf("%[^'\n']s",arr);

    StrCpyRev(arr,brr);

    printf("String After is %s\n",brr);

    return 0;
}