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

void DisplayPrime(PNODE first)
{
   int iCnt = 0;
   int iFlag = 0;
   while(first != NULL)
   {    
        if(first->data > 1)
        {
            iFlag =  1;

            for(iCnt = 2; iCnt <= (first->data)/2 ;iCnt++)
            {
                if(first->data % iCnt == 0)
                {
                    iFlag =  0;
                    break;
                }
            }
            if(iFlag == 1)
            {
                printf("Prime number is : %d\n",first->data);
            }
        }
        
        first = first->next;
   }
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

  
    InsertFirst(&head, 70);
    InsertFirst(&head, 89);
    InsertFirst(&head, 50);
    InsertFirst(&head, 41);
    InsertFirst(&head, 17);
    InsertFirst(&head, 20);
    InsertFirst(&head, 11);

    DisplayPrime(head);
    return 0;
}