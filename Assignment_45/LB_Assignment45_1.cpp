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

        void DisplayPerfect()
        {
            PNODE temp = NULL;
            temp = head;
            
            int i = 0;

            while(temp != NULL)
            {
                int pn = 0;
                for(i = 1; i <= temp->data/2; i++)
                {
                    if(temp->data % i == 0)
                    {
                        pn = pn + i;
                    }
                }
                if(pn == temp->data)
                {
                    cout<<temp->data<<"\t";
                }
                temp = temp->next;
            }
            cout<<"\n";
        }
};



int main()
{
    Singly sobj;

    sobj.InsertFirst(89);
    sobj.InsertFirst(6);
    sobj.InsertFirst(41);
    sobj.InsertFirst(17);
    sobj.InsertFirst(28);
    sobj.InsertFirst(11);

    
    // sobj.Display();
    // cout<<sobj.Count();

    cout<<"Perfect numbers from LL are : \n";
    sobj.DisplayPerfect();

    return 0;
}