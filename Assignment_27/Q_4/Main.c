 #include<stdio.h>

 typedef int BOOL;

 #define TRUE 1
 #define FALSE 0

BOOL ChkVowels(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if ((*str =='a')||(*str =='e')||(*str =='i')||(*str =='o')||(*str =='u'))
        {
            break;
        }
        str++;
    }
    if((*str =='a')||(*str =='e')||(*str =='i')||(*str =='o')||(*str =='u'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char arr[20];
    
    BOOL bRet = FALSE;
    
    printf("Enter string");
    scanf("%[^'\n']s",arr);
    
    bRet = ChkVowels(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowels\n");
    }
    else
    {
        printf("Not Contains Vowels\n");
    }
    return 0;
}
