// Display Prime Numbers. (SinglyLL)

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

void DisplayPrime(PNODE Head)
{
    int iCnt = 0, iCount = 0;
    int iNo = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;
        iCount = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iNo % iCnt) == 0)
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

int main()
{
    PNODE First = NULL;

    InsetFirst(&First,64);
    InsetFirst(&First,101);
    InsetFirst(&First,29);
    InsetFirst(&First,3);
    InsetFirst(&First,1175);
    InsetFirst(&First,256);

    Display(First);

    DisplayPrime(First);

    return 0;
}
