// Display elements greater than average. (SinglyLL)

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

void DisplayGreaterThanAvg(PNODE Head)
{
    PNODE temp = Head;
    int iSum = 0, iCount = 0;
    float avg = 0.0;

    while(temp != NULL)
    {
        iSum = iSum + temp->Data;
        iCount++;
        temp = temp->Next;
    }

    if(iCount == 0)
    {
        return;
    }

    avg = (float)iSum / iCount;

    temp = Head;
    printf("Elements greater than average is : \n" );

    while(temp != NULL)
    {
        if(temp->Data > avg)
        {
            printf("%d\t", temp->Data);
        }
        temp = temp->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsetFirst(&First,30);
    InsetFirst(&First,20);
    InsetFirst(&First,10);
    
    
    Display(First);
    
    DisplayGreaterThanAvg(First);

    return 0;
}
