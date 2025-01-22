#include<bits/stdc++.h>
using namespace std;
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1); 
        // cout<<"-----------"<<endl<<n<<endl;
        n >>= 1;   
        // cout<<n<<endl;       
    }
    return count;
}
int miniMizeXor(int a,int b)
{
    int setBits = countSetBits(b);
    int x=0;
    for (int i = 0; i < 32; i++)
    
    {
        if(setBits>0)
        {

            // cout<< "i= "<<i<<" "<<(1<<i)<<endl;
            x=x|(1<<i);
            cout<<x<<endl;
            setBits--;
        }
        
       
    }
    
return x;
}
int main()
{
    int a,b;
    cin>>a>>b;
    //25=11001=3
    //72=1001000=2
    // cout<<" a&b = "<<(a&b)<<endl;
    // cout<<" a|b = "<<(a|b)<<endl;
    // cout<<" a^b = "<<(a^b)<<endl;
    // cout<<" set of bits"<<countSetBits(a)<<endl;
    cout<<" miniMizeXor "<<miniMizeXor(a,b)<<endl;

   
}