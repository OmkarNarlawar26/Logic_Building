// Write a program which Displays addition of elements from singly linear linked list.

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

int SumDigit(PNODE Head)
{
    int iNo = 0, iSum = 0, iDigit = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;
        iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        printf("%d  ",iSum);
        Head = Head->Next;
    }
    return 0;
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

     iRet = SumDigit(First);

    return 0;
}
