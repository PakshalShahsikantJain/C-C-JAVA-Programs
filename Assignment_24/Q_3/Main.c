#include<stdio.h>
#include<stdlib.h>

int Difference(int arr[], int iSize)
{
    int iCnt = 0;
    
    int iMax = arr[0];
    int iMin = arr[0];
    for(iCnt = 1; iCnt<iSize; iCnt++)
    {
        if(arr[iCnt] > iMax)
        {
            iMax = arr[iCnt];
        }

        else if(arr[iCnt] < iMin)
        {
            iMin = arr[iCnt];
        }
        
    }
    return iMax - iMin;
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
    
    iRet = Difference(ptr,iValue);
    
    printf("Difference is : %d\n",iRet);
    
    return 0;
}
