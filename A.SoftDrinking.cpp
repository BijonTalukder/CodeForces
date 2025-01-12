#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x =k*l;
    int y= x/nl;
    int z=c*d;
    int r=p/np;
    int ans = min(y,z);
    ans = min(ans,r);
    cout<<ans/n<<endl;
    // 3,4,5,10,8,100,3,1
    // 1,4,5,5,3,10,3,1
    //20,15,10 
    // 4*5=20
    // 20/3=6
    // 10*8=80
    // 100/1=100
    // 6,80,100/3=2
    // 5,100,10,1,19,90,4,3
    // 100*10=1000
    // 1000/5=200
    // 1*19=19
    // 90/3=30
    // 19/5=
}