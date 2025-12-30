// Return position of first occurance. (SinglyLL)

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

int FirstOccur(PNODE Head, int No)
{
    int iPos = 1;

    while(Head != NULL)
    {
        if(Head->Data == No)
        {
            return iPos;
        }
        Head = Head->Next;
        iPos++;
    }
    return -1;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsetFirst(&First,64);
    InsetFirst(&First,101);
    InsetFirst(&First,20);
    InsetFirst(&First,101);
    InsetFirst(&First,11);
    InsetFirst(&First,256);

    Display(First);

    iRet = FirstOccur(First,101);
    printf("Position is : %d\n",iRet);

    return 0;
}
