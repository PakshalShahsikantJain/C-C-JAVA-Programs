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

void Display(PNODE Head)
{
    printf("\n");
    while(Head != NULL)
    {
        printf("|%d|->",Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

int Max(PNODE Head)
{
    int iMax = 0;
    while(Head != NULL)
    {
        if(Head->Data > iMax)
        {
            iMax = Head->Data;
        }
        Head = Head->Next;
    }
    return iMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
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

    Display(First);
    iRet = Max(First);

    printf("Maximun is Number is %d",iRet);

    return 0;
}