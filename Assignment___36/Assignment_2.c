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

void Pallindrome(PNODE first)
{
    
  int iRev = 0, iDigit = 0 , iNo = 0;
    while(first != NULL)
    {
        iNo = first->data;
        iRev =0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = (iRev * 10)+ iDigit;
            iNo = iNo / 10;

        }
        if(iRev ==  first->data)
        {
            printf("Pallidrome number : %d\n",iRev);
        }
        
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

    Pallindrome(head);
    return 0;
}