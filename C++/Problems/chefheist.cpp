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
    for(int k=0;k<t;k++){
        int D,d,P,Q,m,x=0;
        cin>>D>>d>>P>>Q;
        if(D%d==0){
            m=(D/d)-1;
        }else{
            m=D/d;
            x=(d-(D%d))*(D/d)*Q;
        }
        int res = D*P+Q*d*(m*(m+1)/2)-x;
        cout<<res<<endl;
    }
    return 0;
}

