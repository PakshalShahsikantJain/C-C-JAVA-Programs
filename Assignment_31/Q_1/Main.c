#include<stdio.h>

void StrCpyRev(char str[],char src[])
{
    int iStart = 0, iEnd = 0;
    char temp = '\0';
    
    if(str == NULL)
    {
        return;
    }
    
    while(str[iEnd] != '\0')        
    {
        iEnd++;
    }
    iEnd --;
    
    while(iStart < iEnd)         
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;
        
        iStart++;
        iEnd--;
    }
    
    src = str;
    str++;
    src++;

    src = '\0';

}

int main()
{
    char arr[30];
    char brr[30];
    
    printf("Enter the string\n");
    scanf("%[^'\n']s",arr);
        
    StrCpyRev(arr,brr);
    
    printf("string After Copy is %s\n",arr);
    
    return 0;
}































