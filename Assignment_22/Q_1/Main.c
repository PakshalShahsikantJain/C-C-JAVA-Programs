#include <stdio.h>
#include <stdlib.h>

int Display(int arr[],int iSize)
{
    int iCnt = 0;
    int iEven = 0;
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((arr[iCnt] %2 )== 0)
        {
            iEven++;
        }
    }

    return iEven;
}
int main()
{
    int iValue = 0;
    int iCnt = 0;
    int *ptr = 0;
    int iRet = 0;

    printf("Enter Values of N\n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(sizeof(int) * iValue);

    if(ptr <= 0)
    {
        printf(" ERROR : Unable To Allocate Memory\n");
        return -1;
    }

    printf("Enter Values\n");
    for(iCnt = 0;iCnt < iValue;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Display(ptr,iValue);
    printf("Even Numbers Are %d",iRet);

    free(ptr);

    return 0;
}