// print list in reverse order. (SinglyLL)

#include<stdio.h>
#include<stdlib.h>


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
        newn->Next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d |->", Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

void DisplayReverse(PNODE Head)
{
    if(Head == NULL)
    {
        return;
    }

    DisplayReverse(Head->Next);
    printf("| %d |->", Head->Data);
}

int main()
{
    PNODE First = NULL;

    InsetFirst(&First,64);
    InsetFirst(&First,101);
    InsetFirst(&First,20);
    InsetFirst(&First,357);
    InsetFirst(&First,117);
    InsetFirst(&First,256);

    Display(First);

    printf("Reverse Display:\n");
    DisplayReverse(First);
    printf("NULL\n");

    return 0;
}
