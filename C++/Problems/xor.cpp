#include<iostream>
#include<cmath>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double

const int mod = 1e9+7;

#define input(arr,n) for(ull i=0;i<n;i++){cin>>arr[i];}
#define output(arr,n) for(ull i=0;i<n;i++){cout<<arr[i];}
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

const int  MX =1e5 +5;
vector<int> arr(MX);

void power(){
    arr[1]=1;
    for(int i=2;i<MX;i++){
        arr[i]=(arr[i-1]*2 )%mod;
    }
}

int main(){
    fastio;
    ll t,n;
    cin>>t;
    power();
    while(t>0){
        cin>>n;
        cout<<arr[n]<<endl;
        t--;
    }
    return 0;
}
