#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node *next;
};
class LinkedList
{
public:
    node *head;
    LinkedList()
    {
        head = NULL;
    }
    node *createNewNode(int value)
    {
        node *newnode = new node;
        cout << "new node value is " << newnode << endl;
        newnode->value = value;
        newnode->next = NULL;
    }
    void insertAtHead(int value)
    {
        node *a = createNewNode(value);
        cout << "new node value is " << a << endl;
        if (head == NULL)
        {
            head = a;
            return;
        }
    }
    void Traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->value << endl;
            a = a->next;
        }
    }
};

class LinkedListAnother
{
public:
    node *head;
    LinkedListAnother()
    {
        head = NULL;
    }
    node *createNewNode(int value)
    {
        node *newnode = new node;
        cout << "new node value is" << newnode << endl;
        newnode->value = value;
        newnode->next = NULL;
    }
    void insertAtHead(int value)
    {
        node *a = createNewNode(value);
        cout << "new node value is" << a << endl;
        if (head == NULL)
        {
            head = a;
            return;
        }
    }
    void Traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->value << endl;
            a = a->next;
        }
    }
};

class Solve
{
public:
    LinkedList *Sum(LinkedList *l1, LinkedList *l2)
    {
        LinkedList *result = new LinkedList();
        // node* p1 = l1->head;
        // node* p2 = l2->head;
        // int carry = 0;
        // vector<int> v1;
        node *a = l1->head;
        node *b = l2->head;
        while (a != NULL || b != NULL)
        {
            int s;
            s = a->value + b->value;
            result->insertAtHead(s);
            // v1.push_back(s);
            a = a->next;
            b = b->next;
        }

        return result;
    }


LinkedList AddTwoNumbers(LinkedList l1, LinkedList l2){
    LinkedList *result = new LinkedList();
    LinkedList *current  = result;
    // while (l1 != nullptr || l2 != nullptr)
    // {
    //     int sum=0;

    // //    sum+=l1->value;
       


    // }
    
}
 };
int main()
{
    LinkedList l1, l2;

    l1.insertAtHead(3);
    l1.insertAtHead(2);
    l1.insertAtHead(1); // l1: 1 -> 2 -> 3

    l2.insertAtHead(4);
    l2.insertAtHead(3);
    l2.insertAtHead(2); // l2: 2 -> 3 -> 4

    cout << "List 1: ";
    l1.Traverse();

    cout << "List 2: ";
    l2.Traverse();

    Solve s;
    LinkedList* result = s.Sum(&l1, &l2);

    cout << "Sum: ";
    result->Traverse(); 
}