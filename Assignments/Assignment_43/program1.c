// Write a program which Display all elements which are perfect from singly Linked List.

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

void DisplayPerfect(PNODE Head)
{
    while(Head != NULL)
    {
        int iCnt = 0;
        int iSum = 0;

        printf("Perfect numbers are : ");

        while(Head != NULL)
        {
            iSum = 0;

            for(iCnt = 1; iCnt <= Head->Data/2; iCnt++)
            {
                if(((Head->Data) % iCnt) == 0)
                {
                    iSum = iSum + iCnt;
                }
            }
            if(iSum == (Head->Data))
            {
                printf("%d ",Head->Data);
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
    InsetFirst(&First,28);
    InsetFirst(&First,41);
    InsetFirst(&First,17);
    InsetFirst(&First,6);
    InsetFirst(&First,11);

    Display(First);

    DisplayPerfect(First);

    return 0;
}
