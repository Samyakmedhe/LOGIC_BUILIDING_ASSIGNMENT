#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first , int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void DisplayProduct(PNODE first)
{
    int iProduct = 1, iDigit = 1 , iNo = 1;
    while(first != NULL)
    {
        iNo = first->data;
        iProduct =1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iProduct = iProduct * iDigit;
            iNo = iNo / 10;

        }
        printf("Product of number is  : %d\n",iProduct);
        first = first->next;
    }
    printf("\n");
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 55);
    InsertFirst(&head, 43);
    InsertFirst(&head, 33);
    InsertFirst(&head, 22);
    InsertFirst(&head, 11);

    DisplayProduct(head);
    return 0;
}