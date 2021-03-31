#include <stdio.h>
#include <stdlib.h>

int Display(int arr[],int iSize)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((arr[iCnt] * 1 ) == 11)
        {
            printf("11 is Present\n");
        }
    }
}
int main()
{
    int iValue = 0;
    int iCnt = 0;
    int *ptr = 0;
    
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

    Display(ptr,iValue);

    free(ptr);

    return 0;
}