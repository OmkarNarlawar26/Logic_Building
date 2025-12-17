// Write a program which search last occurrence of particular element from singly linear linked list.
// Function should return position at which element is found.

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

int SearchLastOcc(PNODE Head, int no)
{
    int Position = 1;
    int LastPosition = -1;

    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            LastPosition = Position;
        }
        Head = Head->Next;
        Position++;
    }
    
    return LastPosition;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsetFirst(&First,70);
    InsetFirst(&First,30);
    InsetFirst(&First,50);
    InsetFirst(&First,40);
    InsetFirst(&First,30);
    InsetFirst(&First,20);
    InsetFirst(&First,10);

    Display(First);

    iRet = SearchLastOcc(First,30);
    printf("Input Element : 30\n");

    if(iRet != -1)
    {
        printf("Element found at position : %d\n", iRet);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}
