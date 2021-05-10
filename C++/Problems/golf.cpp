#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x,k;
        cin>>n>>x>>k;
        if(x%(k+1)!=0){
            int q=x/(k+1)+1;
            if(x==(q*k)){
                cout<<"YES\n";
                continue;
            }
        }
        int r=(n+1)%(k+1);
        int last = (n+1)-r;
        int val = (last%x)+r;
        int j=(val/(k+1))+1;
        if(j*k==val){
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";
    }
    return 0;
}