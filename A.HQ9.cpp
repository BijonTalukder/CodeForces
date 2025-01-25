#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
int flag=0;
    for (int i = 0; i < s.size(); i++)
    {

        // cout<<s[i]<<endl;
       if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
       {
           cout<<"YES";
           flag=1;
           return 0;
       }
    //    else
    //    {
    //        cout<<"NO";
    //        return 0;
    //    }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
}