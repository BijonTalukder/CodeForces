#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *prev;
};
class DoublyLinkedList{
    public:
    node *head;
    int size=0;
    DoublyLinkedList(){
        head =NULL;
    }
    node * CrateNewNode(int data){
        node *newnode = new node();
        newnode->data = data;
        newnode->next=NULL;
        newnode->prev=NULL;
        return newnode;
    }
void insertAtHead(int data){
    node *newnode = CrateNewNode(data);
    if(head==NULL){
        head=newnode;
        return;
    }
    node *a = head;
    newnode->next=a;
    newnode->prev=NULL;
}
};
int main(){

}