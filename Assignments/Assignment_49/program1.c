// Find Difference (Max - Min). (SinglyLL)

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

int Difference(PNODE Head)
{
    int Max = Head->Data;
    int Min = Head->Data;

    while(Head != NULL)
    {
        if(Head->Data > Max)
        {
            Max = Head->Data;
        }

        if(Head->Data < Min)
        {
            Min = Head->Data;
        }

        Head = Head->Next;
    }

    return Max - Min;
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
    
    iRet = Difference(First);
    printf("Difference of max - min is : %d\n",iRet);

    return 0;
}
