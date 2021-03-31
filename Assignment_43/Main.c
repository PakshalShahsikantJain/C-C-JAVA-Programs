#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail,int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn-> next = NULL;

    if((*Head==NULL)&&(*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
    (*Tail)->next = *Head;
}

void InsertLast(PPNODE Head,PPNODE Tail,int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->prev = NULL;

    if((*Head == NULL)&&(*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        (*Tail)->next = newn;
        *Tail = newn;
    }
    (*Tail)->next = *Head;
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int iNo,int pos)
{
    PNODE newn = NULL;
    int cnt = 0;
    int i = 0;
    PNODE temp = *Head;

    cnt = Count(*Head,*Tail);

    if((pos<1)||(pos > (count + 1)))
    {
        return;
    }

    if(pos == 1)
    {
        InsertFirst(Head,Tail,iNo);
    }
    else if(pos == count + 1)
    {
        InsertLast(Head,Tail,iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->next = NULL;
        newn->prev = NULL;
        newn->data = iNo;

        for(i = 1;i < pos-1;i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
    }
    
       
}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
    if((*Head != NULL)&&(*Tail != NULL))
    {
        return;
    }

    if(*Head == *Tail) //Single Node
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else //More than one Node
    {
       *Head = (*Head)->next;
       //free(*Head->prev);

       free((*Tail)->next);
       (*Head)->prev = *Tail;
       (*Tail)->next = *Head;    
    }
}


void DeleteLast(PPNODE Head,PPNODE Tail)
{
    if((*Head != NULL)&&(*Tail != NULL))
    {
        return;
    }

    if(*Head == *Tail) //Single Node
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else //More than one Node
    {
       *Tail = (*Tail)->prev;

       free((*Head)->prev);
       (*Head)->prev = *Tail;
       (*Tail)->next = *Head;    
    }
}

void DeleteAtPos(PPNODE Head,PPNODE Tail,int pos)
{
    int count = 0;
    int i = 0;
    PNODE temp = *Head;

    cnt = Count(*Head,*Tail);

    if((pos < 1)||(pos > count))
    {
        return;
    }
    if(pos == 1)
    {
        DeleteFirst(Head,Tail);
    }
    else if(pos == count)
    {
        DeleteLast(Head,Tail);
    }
    else
    {
        for(i = 1;i < pos-1;i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
}

void Display(PNODE Head,PNODE Tail)
{
    do
    {
        printf("|%d|->",Head->data);
        Head = Head->next;
    } while (Head != Tail->next);
    
}

int Count(PNODE Head,PNODE Tail)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        Head = Head->next;
    } while (Head != Tail->next);

    return iCnt;
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    int iRet = 0;
    int iPos = 0;
    int iNo = 0;
    
    printf("Enter Number\n");
    scanf("%d",&iNo);
    InsertFirst(&First,&Last,iNo);

    printf("Enter Number\n");
    scanf("%d",&iNo);
    InsertFirst(&First,&Last,iNo);

    printf("Enter Number\n");
    scanf("%d",&iNo);
    InsertLast(&First,&Last,iNo);

    printf("Enter Number\n");
    scanf("%d",&iNo);
    InsertLast(&First,&Last,iNo);
    
    printf("Enter Position to Insert\n");
    scanf("%d",&iPos);

    printf("Enter Number\n");
    scanf("%d",&iNo);
    InsertAtPos(&First,&Last,iNo,iPos);

    DeleteFirst(&First,&Last);

    DeleteLast(&First,&Last);

    DeleteAtPos(&First,&Last,iPos);


    
    Display(First,Last);
    iRet = Count(First,Last);

    printf("\nNumber Of Nodes Are %d\n",iRet);

    return 0;
}