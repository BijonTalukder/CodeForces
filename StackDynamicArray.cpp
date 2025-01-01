#include <bits/stdc++.h>
using namespace std;

class Stack
{
    public:
    int *a;
    int stack_size;

    int capacity;

    Stack()
    {
        a = new int[1];
        capacity = 1;
        stack_size = 0;
    }

    void increase_size()
    {
        int *tmp;
        tmp = new int[capacity * 2];
        for (int i = 0; i < stack_size; i++)
        {
            tmp[i] = a[i];
        }
        swap(a, tmp);
        delete []tmp;
        capacity = capacity * 2;
    }


    void push(int value)
    {
        if(stack_size+1>capacity)
        { 
            increase_size();
        }
        stack_size++;
        a[stack_size-1]=value;
    }
    void pop(){
        if(stack_size==0){
            cout<<"Stack is empty";
            return;
        }
        a[stack_size-1]=0;
        stack_size--;
    }
    void top(){
        if(stack_size==0){
            cout<<"Stack is empty";
            return;
        }
        cout<<a[stack_size-1]<<"\n";
    }

};
int main()
{
     Stack st =  Stack();

    st.push(1);
    st.top();
    st.push(2);
    st.top();
    st.push(3);
    st.top();
    cout<<"__________"<<endl;
    st.pop();
    st.top();
    st.pop();
    st.top();
     st.pop();
    st.top();
    return 0;
}