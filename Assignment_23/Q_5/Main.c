#include<stdio.h>
#include<stdlib.h>

int Product(int arr[], int iSize)
{
    int iMult = 1;
    int iCnt = 0;
    
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        if(arr[iCnt] % 2 == 1)
        {  
            iMult = iMult * arr[iCnt];
        }
    }
    
    return iMult;
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
    
    iRet = Product(ptr,iValue); // SumNNumbers(100,5);
    
    printf("Product is : %d\n",iRet);
    
    return 0;
}
