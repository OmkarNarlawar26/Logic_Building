// Check whether All elements are positive. (SinglyLL)

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

BOOL CheckAllPositive(PNODE Head)
{
    while(Head != NULL)
    {
        if(Head->Data < 0)
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

    InsetFirst(&First,64);
    InsetFirst(&First,101);
    InsetFirst(&First,20);
    InsetFirst(&First,357);
    InsetFirst(&First,117);
    // InsetFirst(&First,-256);
    
    Display(First);
    
    bRet = CheckAllPositive(First);

    if(bRet == TRUE)
    {
        printf("All elements are positive");
    }
    else
    {
        printf("Any of the elements are negative");
    }

    return 0;
}
