#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class Singly
{
    public:
        PNODE head;
        int iCount;

        Singly()
        {
            iCount= 0;
            head = NULL;
        }   
        int Count()
        {
            return iCount;
        }
        void Display()
        {
            PNODE temp = head;
            while (temp != NULL)
            {
                cout<<temp->data;
                temp = temp->next;
            }
        }

        void InsertFirst(int iNo)
        {
            PNODE newn = NULL;
            newn = new NODE;
            
            newn->data = iNo;
            newn->next = NULL;

            if(head == NULL)
            {
                head = newn;
            }

            else 
            {
                newn->next = head;
                head = newn;
            }
            iCount++;
        }

        void SumDigit()
        {
            PNODE temp = NULL;
            temp = head;
            
            int no = 0, Sum = 0;
            
            while(temp != NULL)
            {
                Sum = 0;
                no = temp->data;
                while(no != 0)
                {
                    Sum = Sum + no % 10;
                    no = no/10;
                }
                cout<<Sum<<"\t";
                temp = temp->next;
            }
            cout<<"\n";            
        }
};



int main()
{
    Singly sobj;

    sobj.InsertFirst(640);
    sobj.InsertFirst(240);
    sobj.InsertFirst(20);
    sobj.InsertFirst(230);
    sobj.InsertFirst(11);

    sobj.SumDigit();
    
    return 0;
}