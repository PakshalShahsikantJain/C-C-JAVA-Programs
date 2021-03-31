#include<stdio.h>
#include<stdlib.h>

void Range(int arr[],int iSize,int iStart,int iEnd)
{
    int iCnt = 0;

    printf("Output is :\n");    
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if((arr[iCnt] > iStart)&&(arr[iCnt] < iEnd))
        {
            printf("%d\t",arr[iCnt]);
        }
    }
}
int main()
{
    int iValue = 0;
    int iNo1 = 0;
    int iNo2 = 0;
    int iCnt = 0;
    int *ptr = 0;

    printf("Enter Value of Array\n");
    scanf("%d",&iValue);

    printf("Enter Starting Point\n");
    scanf("%d",&iNo1);

    printf("Enter Ending Point\n");
    scanf("%d",&iNo2);

    ptr = (int *)malloc(sizeof(int) * iValue);

    printf("Enter Values\n");
    for(iCnt = 0;iCnt < iValue;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Range(ptr,iValue,iNo1,iNo2);

    return 0;
}