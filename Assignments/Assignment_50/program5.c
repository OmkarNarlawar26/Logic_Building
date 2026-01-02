// Count Nodes at Nth position. (SinglyLL)

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

void DisplayNthNode(PNODE Head, int No)
{
    int iCount = 1;

    while(Head != NULL)
    {
        if(iCount == No)
        {
            printf("Node at position %d : %d\n",No, Head->Data);
            return;
        }
        iCount++;

        Head = Head->Next;
    }

    printf("Position %d dose not exist in the list", No);
}

int main()
{
    PNODE First = NULL;

    InsetFirst(&First,50);
    InsetFirst(&First,40);
    InsetFirst(&First,30);
    InsetFirst(&First,20);
    InsetFirst(&First,10);
    
    Display(First);
    
    DisplayNthNode(First,3);

    return 0;
}
