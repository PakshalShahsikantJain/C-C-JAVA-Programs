#include <stdio.h>
#include <stdlib.h>

int Display(int arr[],int iSize)
{
    int iCnt = 0;
    int iValue = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((arr[iCnt] % 5)==0)
        {
            printf("%d\n",arr[iCnt]);
        }
    
    }
}

int main()
{
    int iValue = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter Values for N \n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(sizeof(int) * iValue);

    printf("Enter Values\n");
    for(iCnt = 0;iCnt < iValue; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Output:\n");

    Display(ptr,iValue);

    free(ptr);

    return 0;
}