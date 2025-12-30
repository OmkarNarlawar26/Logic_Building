// Count elements greater than given number. (SinglyLL)

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

int CountGreater(PNODE Head, int No)
{
    int iCount = 0;

    while(Head != NULL)
    {
        if(Head->Data > No)
        {
            iCount++;
        }
        Head = Head->Next;
    }
    return iCount;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsetFirst(&First,64);
    InsetFirst(&First,101);
    InsetFirst(&First,20);
    InsetFirst(&First,357);
    InsetFirst(&First,117);
    InsetFirst(&First,256);

    Display(First);

    iRet = CountGreater(First,101);
    printf("Position is : %d\n",iRet);

    return 0;
}
