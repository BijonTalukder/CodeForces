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
        int index = 0;
        while (a != NULL)

        {
            if (a->data == value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }
    int SearchAllValue(int value)
    {
        node *a = head;
        int index = 0;
        while (a != NULL)

        {
            if (a->data == value)
            {
                cout << value << " is found at" << index;
            }
            a = a->nxt;
            index++;
        }
    }

    void InsertAtAnyIndex(int index, int value)
    {
        if (index < 0)
        {
            return;
        }

        if (index == 0)
        {
            InsertAtHead(value);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while (cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *newnode = CreateNewNode(value);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }

    void DeleteAtHead()
    {
        if (head == NULL)
            return;
        node *a = head;
        head = a->nxt;
        delete a;
    }
    void DeleteAnyIndex(int index)
    {
        if (index == 0)
        {

            DeleteAtHead();
            return;
        }
        node *a = head;
        int cur_index = 0;
        while (cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
            /* code */
        }
        node *b = a->nxt;
        a->nxt=b->nxt;
        delete b;
    }

    void InsertAfterValue(int value,int data)
    {

        node *a=head;
        while (a!=NULL)
        {


            if(a->data==value){
                break;
            }
            a=a->nxt;
        }
        if(a==NULL)
        {
            cout<<"value not found";
            return;
        }
        node *newNode=CreateNewNode(data);
        a->nxt = newNode;

    }
};
int main()
{
    LinkedList l;
    l.InsertAtHead(10);
}