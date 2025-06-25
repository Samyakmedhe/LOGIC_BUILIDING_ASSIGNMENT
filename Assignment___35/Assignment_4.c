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

int SecondMaximum(PNODE first)
{
    int iMax = 0;
    int SecondMax = 0;
    
    if(first == NULL || first->next == NULL)
    {
        return -1;
    }
    iMax = first->data;
    first = first->next;


    if(first->data > iMax)  
    {
        SecondMax = iMax;
        iMax = first->data;
    }
    else if(first->data <iMax)
    {
        SecondMax = first->data;
    }
    else
    {
        SecondMax = -1;
    }

    first = first->next;

    while(first != NULL)
    {
        if(first->data > iMax)
        {
            SecondMax = iMax;
            iMax = first->data;
        }
        else if(first->data > SecondMax && first->data != iMax)
        {
            SecondMax = first->data;
        }
        first = first ->next;
    }
    return SecondMax;
   
    return iMax;
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

  
    InsertFirst(&head, 70);
    InsertFirst(&head, 30);
    InsertFirst(&head, 50);
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    iRet = SecondMaximum(head);
    printf("Second Maximum element is: %d\n", iRet);
    return 0;
}