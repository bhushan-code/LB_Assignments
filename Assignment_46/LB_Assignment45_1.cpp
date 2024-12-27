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

        void ReverseDigit()
        {
            PNODE temp = NULL;
            temp = head;
            int iDigit = 0;

            while(temp != NULL)
            {
                int no = temp->data;
                int Digit = 0;
                int New = 0;

                while(no != 0)
                {
                    Digit = no %10;
                    no = no/10;
                    New = New + Digit;
                    if(no)
                    {
                        New = New *10;
                    }
                }
                cout<<"|"<<New<<"|->";
                temp = temp->next;
            }
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

    cout<<"Elements from Linkedlist : \n";
    sobj.Display();

    cout<<"\n";

    cout<<"Reverse digit elements : \n";
    sobj.ReverseDigit();

    cout<<"\n";

    // cout<<sobj.Count();


    return 0;
}