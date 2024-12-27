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

        int AdditionEven()
        {
            PNODE temp = NULL;
            temp = head;
            
            int Add = 0;

            while(temp != NULL)
            {
                if(temp->data % 2 == 0)
                {
                    Add += temp->data;
                }
                    
                temp = temp->next;
            }
            return Add;
        }
};



int main()
{
    Singly sobj;

    sobj.InsertFirst(41);
    sobj.InsertFirst(32);
    sobj.InsertFirst(20);
    sobj.InsertFirst(11);

    int iRet = sobj.AdditionEven();
    cout<<"Addition of even elements from LL are : "<<iRet<<"\n";
    
    return 0;
}