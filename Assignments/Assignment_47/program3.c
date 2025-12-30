// Sum of digits of each node. (SinglyLL)

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

void SumDigits(PNODE Head)
{
    int iDigit = 0, iNo = 0, iSum = 0;

    printf("Sum of Digit of each node is : \n");

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

    SumDigits(First);

    return 0;
}
