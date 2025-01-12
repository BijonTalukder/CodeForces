#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // cout<<n;
    if(n%2!=0)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(int i=n;i>=1;i--)
    {
        cout<<i<<" ";
    }
}