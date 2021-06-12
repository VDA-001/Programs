#include<iostream>
#include<string>
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
    string S;
    string ref="CHEF";
    cin>>S;
    bool boolVal=true;
    int count=0;
    while(boolVal){
        int k=0;
        bool refBool=true;
        for(int i=0;i<S.length();i++){
            if(S[i]==ref[k]){
                if(S[i]=='F'){
                    count++;
                    k=0;
                    cout<<count<<endl;
                    S.erase(S.begin()+i);
                    break;
                }
                k++;
                cout<<S[i]<<ref[k-1]<<endl;
                S.erase(S.begin()+i);
                refBool=false;
            }
        }
        if(refBool){
            boolVal=false;
        }
    }
    cout<<count<<endl;
    return 0;
}
