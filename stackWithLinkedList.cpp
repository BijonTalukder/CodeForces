#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node *next;
    node *prev;
};

class DoublyLinkedList {
public:
    node *head;
    int size = 0;

    DoublyLinkedList() {
        head = NULL;
    }

    node *CreateNewNode(int data) {
        node *newnode = new node();
        newnode->data = data;
        newnode->next = NULL;
        newnode->prev = NULL;
        return newnode;
    }

    void insertAtHead(int data) {
        node *newnode = CreateNewNode(data);
        if (head == NULL) {
            head = newnode;
        } else {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
        size++;
    }

    void insert(int index, int data) {
        if (index == 0) {
            insertAtHead(data);
            return;
        }
        if (index > size || index < 0) {
            cout << "Index out of bounds" << endl;
            return;
        }
        node *a = head;
        int cur_index = 0;
        while (cur_index != index - 1) {
            a = a->next;
            cur_index++;
        }
        node *newnode = CreateNewNode(data);
        newnode->next = a->next;
        if (a->next != NULL) {
            a->next->prev = newnode;
        }
        a->next = newnode;
        newnode->prev = a;
        size++;
    }

    void DeleteAtHead() {
        if (head == NULL) {
            return;
        }
        node *a = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete a;
        size--;
    }

    int getSize() {
        return size;
    }
};

class Stack {
    DoublyLinkedList dl;

public:
    Stack() {}

    int top() {
        if (dl.getSize() == 0) {
            cout << "Stack is empty" << endl;
            return -1; // Return an invalid value to indicate the error
        }
        return dl.head->data;
    }

    void pop() {
        if (dl.getSize() == 0) {
            cout << "Stack is empty" << endl;
            return;
        }
        dl.DeleteAtHead();
    }

    void push(int data) {
        dl.insertAtHead(data);
    }

    int size() {
        return dl.getSize();
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl; // Should print 30
    st.pop();
    cout << "Top element after pop: " << st.top() << endl; // Should print 20

    cout << "Stack size: " << st.size() << endl; // Should print 2

    st.pop();
    st.pop();
    st.pop(); // Should print "Stack is empty"

    return 0;
}
