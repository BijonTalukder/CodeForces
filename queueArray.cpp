#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 500;
class Queue
{
public:
  int a[MAX_SIZE];
  int l, r;
  Queue()
  {
    l = 0;
    r = -1;
  }

  void enqueue(int x)
  {
    if (r + 1 >= MAX_SIZE)
    {
      cout << "Queue is full\n";
      return;
    }
    r++;
    a[r] = x;
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
  q.enqueue(5);
  q.enqueue(6);
  q.enqueue(7);
  cout<<q.front()<<" "<<q.size();
  q.dequeue();
  cout<<q.front()<<" "<<q.size();
  q.dequeue();
  cout<<q.front()<<" "<<q.size();

}