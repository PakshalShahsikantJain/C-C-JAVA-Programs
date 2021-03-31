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

void Mult(PNODE Head)
{
    int iMult = 0;
    int iValue = 0;
    int iDigit = 0;

    while(Head != NULL)
    {
        iMult = 1;
        iValue = Head->Data;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            iMult = iMult * iDigit;
            iValue = iValue/10;
        }
        printf("%d->%d\n",Head->Data,iMult);
        Head = Head->Next;
    }
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

    Mult(First);

    return 0;
}