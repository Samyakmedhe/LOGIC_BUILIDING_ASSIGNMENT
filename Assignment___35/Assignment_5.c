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

void SumDigit(PNODE first)
{
    int iSum = 0, iDigit = 0 , iNo = 0;
    while(first != NULL)
    {
        iNo = first->data;
        iSum =0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;

        }
        printf("%d -> Sum of Digits is : %d\n",first->data , iSum);
        first = first->next;
    }
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

  
    InsertFirst(&head, 71);
    InsertFirst(&head, 35);
    InsertFirst(&head, 52);
    InsertFirst(&head, 41);
    InsertFirst(&head, 30);
    InsertFirst(&head, 46);
    InsertFirst(&head, 19);

    SumDigit(head);
    
}