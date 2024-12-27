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

int Maximum(PNODE head)
{
    int Max = 0;
    Max = head->data;

    while(head != NULL)
    {
        if(Max<head->data)
        {
            Max =  head->data;
        }
        head = head->next;
    }
    return Max;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFisrt(&first,240);
    InsertFisrt(&first,320);
    InsertFisrt(&first,230);
    InsertFisrt(&first,110);

    // Display(first);
    iRet = Maximum(first);

    printf("Maximum of all elements from LL is : %d  \n",iRet);

    return 0;
}