#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int power=1;
        vector <int> ans;
        while(n>0)
        {
            int a=n%10;
            if(a>0)
            {
                ans.push_back(a*power);
                // cout<<a*power<<"debug"<<endl;
            }
            n=n/10;
            power=power*10;

        }

        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<endl;
        }
     
    }
}