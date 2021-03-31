#include<stdio.h>
#include<stdlib.h>

int Difference(int arr[],int iSize)
{
    int iCnt = 0;
    int iEven = 0;
    int iOdd = 0;

    for(iCnt = 0;iCnt < iSize ; iCnt++)
    {
        if((arr[iCnt] % 2) == 0)
        {
            iEven = iEven + arr[iCnt];
        }

        else
        {
            iOdd = iOdd + arr[iCnt];
        }
        
    }

    return iEven - iOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    int iCnt = 0;
    int *ptr = NULL;

    printf("Enter The Values of n\n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(sizeof(int)* iValue);

    if(ptr == NULL)
    {
        printf("Error : Unable to allocate memory\n");
        return -1;     
    }
    

    printf("Enter N Value\n");
    for(iCnt = 0;iCnt < iValue ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr,iValue);

    printf("Difference is %d",iRet);

    free(ptr);

    return 0; 
}


