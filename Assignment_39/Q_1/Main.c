#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

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
    if (*Head == NULL)  
    {
        *Head = newn;
    }
    else
    {
        newn -> Next = *Head;
        *Head = newn;
    }
}

int FirstOcc(PNODE Head,int iNo)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        if(Head -> Data == iNo)
        {
            break;
        }
        Head = Head -> Next;
    }

    if(Head ->Data == iNo)
    {
        return iCnt;
    }

    else
    {
        return -1;
    }
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iValue = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Enter Value To Search\n");
    scanf("%d",&iValue);

    iRet = FirstOcc(First,iValue);

    printf("Position Number is %d",iRet);

    return 0;
}