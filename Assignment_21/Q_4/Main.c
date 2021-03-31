#include<stdio.h>
#include<stdlib.h>

int Display(int arr[],int iSize)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if((arr[iCnt] %3== 0)&&(arr[iCnt] % 5==0))
        {
            printf("%d\t",arr[iCnt]);
        }
    }
} 
int main()
{
    int iValue = 0;
    int iCnt = 0;
    int *ptr = NULL;

    printf("Enter Values of N\t");
    scanf("%d",&iValue);

    ptr = (int *)malloc(sizeof(int) * iValue);
    
    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    } 

    printf("Enter Values\n");
    for(iCnt = 0; iCnt < iValue;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Output:\n");

    Display(ptr,iValue);

    free(ptr);

    return 0;
}