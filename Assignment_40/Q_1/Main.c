#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int Data;
    struct Node* Next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE Head,int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = iNo;
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

void DisplayPerfect(PNODE Head)
{
    int iValue = 0;
    int iSum = 0;
    int i = 0;

    while (Head != NULL)
    {
        iValue = Head->Data;
        iSum = 0;

        for(i = 1;i <= iValue/2 ;i++)
        {
            if((iValue % i)==0)
            {
                iSum = iSum+i;
            }
        }
        if(iSum == iValue)
        {
            printf("%d\n",iValue);
        }
        Head = Head->Next;
    }
}

int main()
{
    PNODE First =  NULL;
    int iNo = 0;

    printf("Enter Number\n");
    scanf("%d",&iNo);
    InsertFirst(&First,iNo);
    
    printf("Enter Number\n");
    scanf("%d",&iNo);
    InsertFirst(&First,iNo);

    printf("Enter Number\n");
    scanf("%d",&iNo);
    InsertFirst(&First,iNo);
    
    printf("Enter Number\n");
    scanf("%d",&iNo);
    InsertFirst(&First,iNo);
    
    printf("Enter Number\n");
    scanf("%d",&iNo);
    InsertFirst(&First,iNo);
    
    printf("Enter Number\n");
    scanf("%d",&iNo);
    InsertFirst(&First,iNo);

    printf("Perfect Numbers Are\n");

    DisplayPerfect(First);

    return 0;
}