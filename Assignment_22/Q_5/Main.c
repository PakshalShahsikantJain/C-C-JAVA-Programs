#include <stdio.h>
#include <stdlib.h>

int Display(int arr[],int iSize,int iNo)
{
    int iCnt = 0;
    int iNumber= 0;
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iNumber++;
        }
    }

    return iNumber;
}
int main()
{
    int iValue1 = 0;
    int iCnt = 0;
    int *ptr = 0;
    int iRet = 0;
    int iValue2 = 0;

    printf("Enter Values of N\n");
    scanf("%d",&iValue1);

    printf("Enter Value\n");
    scanf("%d",&iValue2);

    ptr = (int *)malloc(sizeof(int) * iValue1);

    if(ptr <= 0)
    {
        printf(" ERROR : Unable To Allocate Memory\n");
        return -1;
    }

    printf("Enter Values\n");
    for(iCnt = 0;iCnt < iValue1;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Display(ptr,iValue1,iValue2);
    printf("Output : %d",iRet);

    free(ptr);

    return 0;
}