// Write a program which returns addition of all even elements from singly linear linked list.

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

int AdditionEven(PNODE Head)
{
    while(Head != NULL)
    {
        int iCnt = 0;
        int iSum = 0;

        printf("Prime numbers are : ");

        while(Head != NULL)
        {
            if(((Head->Data) % 2) == 0)
            {
                iSum = iSum + Head->Data;
            }
            Head = Head->Next;
        }
        return iSum;
    }  
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsetFirst(&First,41);
    InsetFirst(&First,32);
    InsetFirst(&First,20);
    InsetFirst(&First,11);

    Display(First);

     iRet = AdditionEven(First);

     printf("Addition of even number is : %d\n",iRet);

    return 0;
}
