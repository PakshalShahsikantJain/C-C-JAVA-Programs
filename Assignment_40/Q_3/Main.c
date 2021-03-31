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

int AdditionEven(PNODE Head)
{
    int iSum = 0;
    while(Head != NULL)
    {
        if(Head->Data % 2 == 0)
        {
            iSum = iSum + Head->Data;
        }
        Head = Head->Next; 
    }
    return iSum;
}

int main()
{
    PNODE First = NULL;
    int iNo = 0;
    int iRet = 0;

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

    
    iRet = AdditionEven(First);

    printf("Addtion Of Linked List is %d",iRet);

    return 0;
}