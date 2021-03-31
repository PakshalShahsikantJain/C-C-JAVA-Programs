#include<stdio.h>
#include<stdlib.h>

int Addition(int arr[], int iSize)
{
    int iCnt = 0;
    int iNo = 0;
    int iDigit = 0;
    
    int iSum = 0;
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        iNo = arr[iCnt];
        iSum = 0;
    
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf("%d\t",iSum);

    }

}

int main()
{
    int iValue = 0;
    int iCnt = 0;
    int iRet = 0;
    
    int *ptr = NULL;
    
    printf("Enter the value of N : ");
    scanf("%d",&iValue);
    
    ptr = (int *)malloc(4 * iValue);
    
    printf("Enter the values of array\n");

    for(iCnt = 0; iCnt<iValue; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    Addition(ptr,iValue); 
    free(ptr);
    return 0;
}
