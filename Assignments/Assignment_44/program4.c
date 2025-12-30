// Count how many times a number appears. (SinglyLL)

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

int Frequency(PNODE Head, int No)
{
    int iCount = 0;

    while(Head != NULL)
    {
        if(Head->Data == No)
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
    InsetFirst(&First,25);
    InsetFirst(&First,20);
    InsetFirst(&First,25);
    InsetFirst(&First,11);
    InsetFirst(&First,25);

    Display(First);

    iRet = Frequency(First,25);
    printf("Frequency of numbers is : %d\n",iRet);

    return 0;
}
