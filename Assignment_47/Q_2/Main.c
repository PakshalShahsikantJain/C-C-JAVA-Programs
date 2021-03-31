#include<stdio.h>

int Max(int No,int Largest)
{
    if(No != 0)
    {
        if(No % 10 > Largest)
        {
            Largest = No % 10;
            No = No/10;
            return Max(No,Largest);
        }
    }
    return Largest;
}

int main()
{
    int No = 0;
    int Largest = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&No);

    iRet = Max(No,Largest);

    printf("Greater Digit Is %d",iRet);

    return 0;
}