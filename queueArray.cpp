#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 5;
class Queue
{
public:
  int a[MAX_SIZE];
  int l, r;
  Queue()
  {

    cout << "Queue is created\n"<<l<<" "<<r<<" "<<MAX_SIZE<<endl;
    l = 0;
    r = -1;
  }

  // left =0 ,right = -1
  // cout<<"left = "<<l<<" right = "<<r<<1<<endl;
  void enqueue(int x)    //x=1, x=6 , x=7 x=9
  {
    if (r + 1 >= MAX_SIZE)
    {
      cout << "Queue is full\n";
      return;
    }
    r++; //r-0 , r-1, r-2 r-3 r-4
    a[r] = x; //a[0]=1 a[1]=6 a[2]=7 a[3]=9
  }

  void dequeue()
  {
    if (l > r)
    {
      cout << "Queue is empty\n";
      return;
    }

    
    l++;
  }
  int front()
  {
    if (l > r)
    {
      cout << "Queue is empty\n";
      return -1;
    }
    return a[l];
  }

  int size()
{
  return r - l + 1;
}
};


main()
{

  Queue q;
  q.enqueue(1);
  q.enqueue(6);
  q.enqueue(7);
  q.enqueue(9);
  q.enqueue(16);
  q.enqueue(16);


  cout<<q.front()<<" ";
  // q.dequeue();
  cout<<q.front()<<" ";
  // q.dequeue();
  cout<<q.front()<<" ";
  cout<<q.front()<<" ";
  cout<<q.front()<<" ";
  q.dequeue();
  cout<<q.front()<<" ";


}