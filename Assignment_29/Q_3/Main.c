#include<stdio.h>

int  FirstOccurance(char *str,char ch)
{
    int iCnt = 0;
    int i = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {   
            break;
        }
        str++;
        i++;   
    }

    if(*str == ch)
    {
        return i;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char arr[30];
    char cValue = '\0';
    int  iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Character To Search\n");
    scanf(" %c",&cValue);
    

    iRet = FirstOccurance(arr,cValue);
    printf("%d",iRet);

    return 0;
}
    