// Replace negative number with absoulute value. (SinglyLL)

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

void MakeAbsolute(PPNODE Head)
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        if(temp->Data < 0)
        {
            temp->Data = -(temp->Data);
        }
        temp = temp->Next;

    }
}

int main()
{
    PNODE First = NULL;

    InsetFirst(&First,-64);
    InsetFirst(&First,101);
    InsetFirst(&First,20);
    InsetFirst(&First,-357);
    InsetFirst(&First,117);
    InsetFirst(&First,-256);
    
    Display(First);
    
    MakeAbsolute(&First);
    Display(First);

    return 0;
}
