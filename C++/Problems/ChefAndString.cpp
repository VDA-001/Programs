#include<iostream>
#include <bits/stdc++.h>
#include<string>

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
    for(int j=0;j<t;j++){
        string S;
        int i=1,count=0;
        cin>>S;
        while(i<S.length()){
            if(S[i]!=S[i-1]){
                count++;
                i++;
            }
            i++;
        }
        cout<<count<<endl;
    }
    return 0;
}
