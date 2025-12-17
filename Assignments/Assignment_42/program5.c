// Write a program which returns smallest element from singly linear linked list.

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

int Minimum(PNODE Head)
{
    int iMax = Head->Data;

    while(Head != NULL)
    {
        if((Head->Data) < iMax)
        {
            iMax = Head->Data;
        }
        Head = Head->Next;
    }
    
    return iMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsetFirst(&First,640);
    InsetFirst(&First,240);
    InsetFirst(&First,20);
    InsetFirst(&First,320);
    InsetFirst(&First,230);
    InsetFirst(&First,110);

    Display(First);

    iRet = Minimum(First);

    printf("Smallest element is : %d",iRet);

    return 0;
}
