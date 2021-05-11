#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int n=1,x=1,k=1;
        cin>>n>>x>>k;
        if((x%k==0)){
            cout<<"YES\n";
            continue;
        }
        if(((n+1)-x)%k==0){
            cout<<"YES\n";
            continue;
        }
        
        cout<<"NO\n";
    }
    return 0;
}