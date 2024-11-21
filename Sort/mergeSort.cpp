#include <bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int> a)
{
    // base case
    if (a.size() == 0)
    {
        return a;
    }
    if (a.size() == 1)
    {
        return a;
    }
    int mid = a.size() / 2;
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < mid; i++)
    {
        b.push_back(a[i]);
        /* code */
    }
    for (int i = mid; i < a.size(); i++)
    {
        c.push_back(a[i]);
        /* code */
    }
    vector<int> sorted_b = merge_sort(b);
    vector<int> sorted_c = merge_sort(c);
    vector<int> sorted_a;
    int idx1 = 0;
    int idnx2 =0;
    int sz = a.size();
    for (int i = 0; i < a.size(); i++)
    {
        if(idx1==sorted_b.size())
        {
             sorted_a.push_back(sorted_c[idnx2]);
            idnx2++; 
        }
        else{
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;

        }
    


        if(sorted_b[idx1]<sorted_c[idnx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else{
           sorted_a.push_back(sorted_c[idnx2]);
            idnx2++; 
        }
        
        /* code */
    }
    return sorted_a;
    
}
int main()
{
    vector<int>a={5,3,7,1,8,9};
    vector<int>ans=merge_sort(a);
    for (int i = 0; i < a.size(); i++)

    {
        cout<<ans[i]<<" ";
        /* code */
    }
    
}