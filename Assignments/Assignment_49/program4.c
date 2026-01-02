// Count elements divisible by 5. (SinglyLL)

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

int CountDivByFive(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        if((Head->Data % 5) == 0)
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

    InsetFirst(&First,65);
    InsetFirst(&First,101);
    InsetFirst(&First,20);
    InsetFirst(&First,357);
    InsetFirst(&First,117);
    InsetFirst(&First,250);
    
    Display(First);
    
    iRet = CountDivByFive(First);
    printf("Count of elements which are dividible by 5 are : %d\n",iRet);

    return 0;
}
