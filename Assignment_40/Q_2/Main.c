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
void DisplayPrime(PNODE Head)
{
    while(Head != NULL);
    {
        if(Head->Data % 2 == 1)
        {
            printf("%d",Head->Data);
        }
        Head = Head->Next;
    }
    
}

int main()
{
    PNODE First = NULL;
    int iNo = 0;
    int iCnt = 0;

    printf("Enter Linked List\n");
    scanf("%d",&iNo);
    InsertFirst(&First,iNo);

    printf("Enter Linked List\n");
    scanf("%d",&iNo);
    InsertFirst(&First,iNo);
    
    printf("Enter Linked List\n");
    scanf("%d",&iNo);
    InsertFirst(&First,iNo);
    
    printf("Enter Linked List\n");
    scanf("%d",&iNo);
    InsertFirst(&First,iNo);
    
    printf("Enter Linked List\n");
    scanf("%d",&iNo);
    InsertFirst(&First,iNo);

    DisplayPrime(First);

    return 0;
}