// Write a program which returns second maximum elements from singly linear linked list.

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

int SecMaximum(PNODE Head)
{
    int Max = Head->Data;
    int SecMax = -1;

    while(Head != NULL)
    {
        if(Head->Data > Max)        
        {
            SecMax = Max;
            Max = Head->Data;
        }
        else if(Head->Data > SecMax && Head->Data != Max)
        {
            SecMax = Head->Data;
        }
        Head = Head->Next;
    }
    return SecMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsetFirst(&First,240);
    InsetFirst(&First,320);
    InsetFirst(&First,230);
    InsetFirst(&First,110);

    Display(First);

     iRet = SecMaximum(First);

     printf("Second Maximum number is : %d\n",iRet);

    return 0;
}
