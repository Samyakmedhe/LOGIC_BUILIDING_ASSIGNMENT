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

int SearchLastOCC(PNODE first , int No)
{
    int iPos = 1;
    int ilastPos = -1 ;
   
   while(first != NULL)
   {    
        if(first->data == No)
        {
            ilastPos = iPos;
        }
        first = first->next;
        iPos++;
   }
       
    return ilastPos;
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

    iRet = SearchLastOCC(head,30);
    printf("Last Occurance is : %d\n",iRet);
    return 0;
}