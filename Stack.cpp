#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    static const int MAX_SIZE = 500;
    int arr[MAX_SIZE];
    int stack_size;
    Stack()
    {
        stack_size = 0;
    }

    void push(int value)
    {
        if (stack_size + 1 > MAX_SIZE)
        {
            cout << "Stack is full";
            return;
        }
        stack_size++;
        arr[stack_size - 1] = value;
    }
    void pop()
    {
        if (stack_size == 0)
        {
            cout << "Stack is empty";
            return;
        }
        arr[stack_size - 1] = 0;
        stack_size--;
    }
    void top()
    {
        if (stack_size == 0)
        {
            cout << "Stack is empty";
            return;
        }
        cout << arr[stack_size - 1] << "\n";
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