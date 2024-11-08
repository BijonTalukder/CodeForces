#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i <n; i++)
    {
       cin>>a[i]; 
        /* code */
    }

    // out o(n)
    // in o(n2)

    for (int i = 0; i < n; i++)
    {


        // int idx=i;
        // while (idx>=1)
        // {
        //   if(a[idx-1]>a[idx])
        //   {
        //     swap(a[idx-1],a[idx]);
        //   }
        //   else{
        //     break;
        //   }
        // }
        
      
        for(int j=i;j>=1;j--)
        {
            if(a[j-1]>a[j])
            {
                swap(a[j-1],a[j]);

            }
        }

    
    }
    
    
 for (int i = 0; i <n; i++)
    {
       cout<<a[i]; 
        /* code */
    }


}