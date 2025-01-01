#include<bits/stdc++.h>
using namespace std;
vector<int> coins = {1, 3,4};
int coin_changer(int n)
{
    if(n==0)
    {
        return 0;
    }
    int ans=1e9;
    for(int i=0;i<coins.size();i++)
    {
        if(n>=coins[i]){
        ans=min(ans,coin_changer(n-coins[i])+1);

        }
    }
    return ans;

}
int main()
{
    int n;
    cin>>n;
    cout<<coin_changer(n)<<endl;
    return 0;
}