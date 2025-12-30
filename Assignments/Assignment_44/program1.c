// Check whether a number is present or not (SinglyLL)
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

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

bool Search(PNODE Head, int No)
{
    while(Head != NULL)
    {
        if(Head->Data == No)
        {
            return TRUE;
        }
        else
        {
            Head = Head->Next;
        }
    }
    return FALSE;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsetFirst(&First,640);
    InsetFirst(&First,240);
    InsetFirst(&First,20);
    InsetFirst(&First,230);
    InsetFirst(&First,110);

    Display(First);

    iRet = Search(First,240);
    // iRet = Search(First,560);

    if(iRet == TRUE)
    {
        printf("Number is Found");
    }
    else
    {
        printf("Number is not Found");
    }

    return 0;
}
