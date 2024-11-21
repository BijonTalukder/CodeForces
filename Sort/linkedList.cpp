#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *nxt;
};
class LinkedList
{
    public:
    node *head;
    LinkedList()
    {
        head = NULL;
    }
    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
    }

    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }
    void Traverse()
    {
         node *a = head;
        while (a != NULL)
           {

            cout << a->data << " ";
            a = a->nxt; /* code */
        }
    }
    int SearchDistincValue(int value)
    {
        node *a = head;
        int index=0;
        while (a != NULL)

        {
            if(a->data==value)
            {
                return index;
            }
            a=a->nxt;
            index++;

        }
        return -1;
    }
    int SearchAllValue(int value)
    {
         node *a = head;
        int index=0;
        while (a != NULL)

        {
            if(a->data==value)
            {
              cout<<value<<" is found at"<<index;
            }
            a=a->nxt;
            index++;

        }
     
    }
};
int main()
{
    LinkedList l;
    l.InsertAtHead(10);
}