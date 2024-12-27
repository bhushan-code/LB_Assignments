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

void InsertFisrt(PPNODE head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head->next;
    }
}



int Count(PNODE head)
{
    int iCount=0;
    while(head != NULL)
    {
        iCount++;
        head = head->next;
    }
    return iCount;

}

int Addition(PNODE head)
{
    int Add = 0;

    while(head != NULL)
    {
        Add = Add + head->data;
        head = head->next;
    }

    return Add;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFisrt(&first,40);
    InsertFisrt(&first,30);
    InsertFisrt(&first,20);
    InsertFisrt(&first,10);

    iRet = Addition(first);

    printf("Additon of all elements from LL is : %d  \n",iRet);

    return 0;
}