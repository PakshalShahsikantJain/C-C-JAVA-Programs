#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int value)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;

    
    if((*Head ==NULL) && (*Tail == NULL))    
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

void InsertLast(PPNODE Head, PPNODE Tail, int value)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;

    
    if((*Head ==NULL) && (*Tail == NULL))    
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

void Display(PNODE Head,PNODE Tail)
{

    if((Head == NULL)&&(Tail == NULL))
    {
        return;
    }

    do
    {
        printf("|%d|<->",Head->data);
        Head = Head->next;
    } while (Head != Tail->next);
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int Value,int Pos)
{
    int size = 0;
    int i = 0;
    size = Count(*Head,*Tail);
    PNODE newn = NULL;
    if(pos == 1)
    {
        InsertFirst(Head,Tail,Value);
    }
    else if (pos == size+1)
    {
        InsertLast(Head,Tail,Value);
    }
    
    else
    {
        for(i = ;i<Pos - 1;i++)
        {
            temp = temp->next;
        }
    }
}

void DeletAtPos(PPNODE Head,PPNODE Tail,int iPos)
{
    int size = 0;
    size = Count(*Head,*Tail);

    for(i = 0;iPos-1;i++)
    {
        temp = temp->next;
        free(temp);
    }
}
int Count(PNODE Head,PNODE Tail)
{
    int iCnt = 0;
    if((Head == NULL)&&(Tail == NULL))
    {
        return 0;
    }

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

    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);
    InsertLast(&First,&Last,101);

    Display(First,Last);      
        
    return 0;
}

