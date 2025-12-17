// Write a program which returns addition of all element from singly linear linked list.

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

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

    newn->Next = NULL;
    newn->Data = no;

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

int Addition(PNODE Head)
{
    int Sum = 0;

    while(Head != NULL)
    {
        Sum = Sum + (Head->Data);
        Head = Head->Next;
    }
    
    return Sum;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsetFirst(&First,40);
    InsetFirst(&First,30);
    InsetFirst(&First,20);
    InsetFirst(&First,10);

    Display(First);

    iRet = Addition(First);

    printf("Addition is : %d",iRet);

    return 0;
}
