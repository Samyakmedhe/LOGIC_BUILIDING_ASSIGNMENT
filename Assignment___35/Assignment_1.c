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

void Perfect(PNODE first)
{
    
    int iSum = 0;
    int iCnt = 0;

    while(first != NULL)
    {
        iSum = 0;
        for(iCnt = 1 ; iCnt <= (first->data)/2 ; iCnt++)
        {
            if((first->data) % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }

        }

        if(iSum == first->data)
        {
            printf("Perfect number is : %d\n",first->data);
        }
        first = first->next;
    }
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

  
    InsertFirst(&head, 70);
    InsertFirst(&head, 28);
    InsertFirst(&head, 50);
    InsertFirst(&head, 40);
    InsertFirst(&head, 6);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    Perfect(head);
    return 0;
}