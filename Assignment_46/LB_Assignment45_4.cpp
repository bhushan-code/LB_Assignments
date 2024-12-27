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
                cout<<"|"<<temp->data<<"|->";
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

        void SmallestDigit()
        {
            PNODE temp = NULL;
            temp = head;

            while(temp != NULL)
            {
               int no =temp->data;
                int iDigit = 0;
                int Smallest = no;

                while(no != 0)
                {
                    iDigit = no%10;
                    no = no/10;
                    if(Smallest > iDigit)
                    {
                        Smallest = iDigit;
                    }
                }
                cout<<Smallest<<"\t";
                temp = temp->next;
            }
        }

};

int main()
{
    Singly sobj;

    sobj.InsertFirst(419);
    sobj.InsertFirst(532);
    sobj.InsertFirst(250);
    sobj.InsertFirst(11);

    cout<<"Elements from Linkedlist : \n";
    sobj.Display();

    cout<<"\n";
    cout<<"Smallest of digit of elements from Linkedlist : \n";
    sobj.SmallestDigit();

    cout<<"\n";

    // cout<<sobj.Count();
    return 0;
}