#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 500;
class Queue
{
public:
  int a[MAX_SIZE];
  int l, r;
  int sz;
  Queue()
  {
    l = 0;
    r = -1;
  }

  void enqueue(int x)
  {
    if (sz== MAX_SIZE)
    {
      cout << "Queue is full\n";
      return;
    }
    r++;
    if(r==MAX_SIZE){
        r=0;
    }
    a[r] = x;
    sz++;
  }

  void dequeue()
  {
    if (sz==0)
    {
      cout << "Queue is empty\n";
      return;
    }
    if(l==MAX_SIZE){
        l=0;
    }
    l++;
  }
  int front()
  {
    if (sz==0)
    {
      cout << "Queue is empty\n";
      return -1;
    }
    return a[l];
  }

  int size()
{
  return sz;
}
};


main()
{

  Queue q;
  q.enqueue(5);
  q.enqueue(6);
  q.enqueue(7);
  cout<<q.front()<<" "<<q.size();
  q.dequeue();
  cout<<q.front()<<" "<<q.size();
  q.dequeue();
  cout<<q.front()<<" "<<q.size();

}