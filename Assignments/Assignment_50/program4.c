// Display alternative nodes . (SinglyLL)

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

void DisplayAlternative(PNODE Head)
{
    int pos = 1;

    while(Head != NULL)
    {
        if(pos % 2 != 0)
        {
            printf("%d\t",Head->Data);
        }

        pos++;
        Head = Head->Next;
    }
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
    
    DisplayAlternative(First);

    return 0;
}
