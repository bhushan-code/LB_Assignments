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

        int SecMaximum()
        {
            PNODE temp = NULL;
            temp = head;
            
            int Max = 0;
            int sMax = 0;
            while(temp != NULL)
            {
                if(Max < (temp->data))
                {
                    sMax = Max;
                    Max = temp->data;
                }
                else if(sMax < (temp->data))
                {
                    sMax = temp->data;
                }
                temp = temp->next;
            }
            return sMax;
        }
};



int main()
{
    Singly sobj;

    sobj.InsertFirst(240);
    sobj.InsertFirst(320);
    sobj.InsertFirst(230);
    sobj.InsertFirst(11);

    int iRet = sobj.SecMaximum();
    cout<<"Second max numbers from LL are : "<<iRet<<"\n";
    
    return 0;
}