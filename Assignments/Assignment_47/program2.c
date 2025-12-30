// Count digit of each node. (SinglyLL)

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
        newn->Next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d |->", Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

void CountDigits(PNODE Head)
{
    int iDigit = 0, iNo = 0, iCount = 0;

    printf("Count of Each node's Digit is : \n");

    while(Head != NULL)
    {
        iNo = Head->Data;
        iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iCount++;
            iNo = iNo / 10;
        }
        printf("%d  ",iCount);
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsetFirst(&First,64);
    InsetFirst(&First,101);
    InsetFirst(&First,20);
    InsetFirst(&First,3);
    InsetFirst(&First,1175);
    InsetFirst(&First,256);

    Display(First);

    CountDigits(First);

    return 0;
}
