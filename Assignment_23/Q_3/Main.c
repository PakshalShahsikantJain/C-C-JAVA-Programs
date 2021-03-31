#include<stdio.h>
#include<stdlib.h>

int  LastOCC(int arr[],int iSize,int iNo)
{
    int iCnt = 0;

    for(iCnt = iSize-1 ;iCnt >= 0;iCnt--)
    {
        if(arr[iCnt]== iNo)
        {
            break;
        }
    }
    return iCnt;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

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

    iRet = LastOCC(ptr,iValue1,iValue2);

    if(iRet == -1)
    {
        printf("There Is No Such Number\n");
    }
    else
    {
        printf("First Occurance of NUmber is %d\n",iRet);
    }

    free(ptr);

    return 0;
}