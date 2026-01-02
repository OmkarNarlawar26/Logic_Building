// Count two-digit number. (SinglyLL)

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

int CountTwoDigit(PNODE Head)
{
    int iDigit = 0, iNo = 0;
    int iCount = 0;
    int iCntDigTwo = 0;

    while(Head != NULL)
    {
        iCount = 0;
        iNo = Head->Data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iCount++;
            iNo = iNo / 10;
        }

        if(iCount == 2)
        {
            iCntDigTwo++;
        }

        Head = Head->Next;
    }

    return iCntDigTwo;
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
    InsetFirst(&First,25);
    
    Display(First);
    
    iRet = CountTwoDigit(First);
    printf("Count of elements which presents only 2 digits : %d\n",iRet);

    return 0;
}
