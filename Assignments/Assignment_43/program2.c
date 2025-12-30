// Write a program which Display all elements which are Prime from singly Linked List.

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

void DisplayPrime(PNODE Head)
{
    while(Head != NULL)
    {
        int iCnt = 0;
        int iCount = 0;

        printf("Prime numbers are : ");

        while(Head != NULL)
        {
            iCount = 0;

            for(iCnt = 1; iCnt <= Head->Data; iCnt++)
            {
                if(((Head->Data) % iCnt) == 0)
                {
                    iCount++;
                }
            }
            if(iCount == 2)
            {
                printf("%d  ",Head->Data);
            }
            Head = Head->Next;
        }
    }  
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsetFirst(&First,89);
    InsetFirst(&First,22);
    InsetFirst(&First,41);
    InsetFirst(&First,17);
    InsetFirst(&First,20);
    InsetFirst(&First,11);

    Display(First);

    DisplayPrime(First);

    return 0;
}
