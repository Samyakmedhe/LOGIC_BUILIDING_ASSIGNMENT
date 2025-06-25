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

int SummationEven(PNODE first , int No)
{
    int iSum = 0;
    while(first != NULL)
    {
        if(first->data % 2 == 0)
        {
            iSum = iSum + first->data;
        }
        
        first = first ->next;
    }
   
    return iSum;
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 55);
    InsertFirst(&head, 40);
    InsertFirst(&head, 33);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    iRet = SummationEven(head,30);
    printf("Summation of Even linked list : %d\n",iRet);
    return 0;
}