#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int arr[],int iSize,int iNo)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iCnt = 0;
    int *ptr = NULL;
    BOOL bRet = FALSE;

    printf("Enter Value of Array\n");
    scanf("%d",&iValue1);

    printf("Enter Number\n");
    scanf("%d",&iValue2);

    ptr = (int *)malloc(sizeof(int) * iValue1);

    printf("Enter Values\n");
    for(int iCnt = 0; iCnt < iValue1;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Check(ptr,iValue1,iValue2);

    if(bRet == TRUE)
    {
        printf("Number is Present\n");
    }
    else
    {
        printf("Number is Abscent\n");
    }

    free(ptr);

    return 0;
}