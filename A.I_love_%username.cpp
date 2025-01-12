#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int max=ar[0];
    int min=ar[0];
    int count=0;
    for(int i=0;i<n;i++){
        if(ar[i]>max){
            // cout<<ar[i]<<"max"<<endl;
            max=ar[i];
            count++;
        }
        if(ar[i]<min){
            min=ar[i];
            // cout<<ar[i]<<"min"<<endl;
            count++;
        }
    }
    cout<<count<<endl;

}