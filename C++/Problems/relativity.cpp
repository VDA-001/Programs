#include<iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double

const int mod = 1e+7;

#define input(arr,n) for(ull i=0;i<n;i++){cin>>arr[i];}
#define output(arr,n) for(ull i=0;i<n;i++){cout<<arr[i];}
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int g,c;
        cin>>g>>c;
        cout<<(c*c)/(2*g)<<endl;
    }
    return 0;
}
