// Check whether list is sorted . (SinglyLL)

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef bool BOOL;

#define TRUE 1
#define FALSE 0

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsetFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->Next = NULL;

    if(*Head == NULL)
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
    while(Head != NULL)
    {
        printf("| %d |->",Head->Data);
        Head = Head -> Next;
    }

    printf("NULL \n");
}

BOOL CheckSorted(PNODE Head)
{
    if(Head == NULL)
    {
        return 0;
    }

    while(Head->Next != NULL)
    {
        if(Head->Data > Head->Next->Data)
        {
            return FALSE;
        }
        Head = Head->Next;
    }

    return TRUE;
}

int main()
{
    PNODE First = NULL;
    BOOL bRet = FALSE;

    InsetFirst(&First,30);
    InsetFirst(&First,20);
    InsetFirst(&First,10);
    
    
    Display(First);
    
    bRet = CheckSorted(First);

    if(bRet == TRUE)
    {
        printf("List is sorted");
    }
    else
    {
        printf("List is not sorted");
    }

    return 0;
}
