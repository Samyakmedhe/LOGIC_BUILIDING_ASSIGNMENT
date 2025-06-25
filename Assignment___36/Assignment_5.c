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

void DisplayLarge(PNODE first)
{
    
    int iLarge = 0, iDigit = 0 , iNo = 0;
    while(first != NULL)
    {
        iNo = first->data;
        iLarge =0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > iLarge)
            {
                iLarge = iDigit;
            }
            iNo = iNo / 10;

        }
         
        printf("%d\n",iLarge);
        
        
        first = first->next;
    }
    printf("\n");
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

  
    InsertFirst(&head, 72);
    InsertFirst(&head, 28);
    InsertFirst(&head, 414);
    InsertFirst(&head, 101);
    InsertFirst(&head, 6);
    InsertFirst(&head, 26);
    InsertFirst(&head, 11);

    DisplayLarge(head);
    return 0;
}