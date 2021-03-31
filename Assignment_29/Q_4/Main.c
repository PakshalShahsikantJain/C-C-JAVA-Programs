#include<stdio.h>

int  LastOccurance(char *str,char ch)
{   
    int i = 0;
    int iPos = -1;

    if((str == NULL) || (ch == '\0'))
    {
        return -1;
    }
    
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            iPos = i;
        }
        i++;
    }
    
    return iPos;
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
    

    iRet = LastOccurance(arr,cValue);
    printf("%d",iRet);

    return 0;
}
    