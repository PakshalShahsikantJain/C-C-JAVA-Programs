#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int Data;
    struct Node *Next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE Head ,int no )
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->Next = NULL;
    newn->Data = no;
    if (Head == NULL)  
    {
        *Head = newn;
    }
    else
    {
        newn -> Next = *Head;
        *Head = newn;
    }
}
void Display(PNODE Head)
{
    printf("\n");
    while(Head != NULL)
    {
        printf("|%d|->",Head ->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

int LastOCC(PNODE Head,int iNo)
{
    int iCnt = 1;
    int iPos = 1;
 
    while(Head != NULL)
    {
        if(Head->Data == iNo)
        {
            iPos = iCnt;
        }
        Head = Head->Next;
        iCnt++;
    }

    return iPos;
}

int main()
{
    PNODE First = NULL;
    int iNo = 0;
    int iRet = 0;
    int iPos = 0;
    
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

    printf("Enter Number To Search\n");
    scanf("%d",&iPos);

    iRet = LastOCC(First,iPos);

    printf("Position Number is %d\n",iRet);

    return 0;
}

