#include<iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double

const int mod = 1e+7;

#define input(arr,n) for(ull i=0;i<n;i++){ll n;cin>>n;arr[i]=n;}
#define output(arr,n) for(ull i=0;i<n;i++){cout<<arr[i]<<" ";}
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main(){
    int t;
    cin>>t;
    //Approach - 1 (TLE)
    /*for(int h=0;h<t;h++){
        int n;
        cin>>n;
        ll arr[n],res[n];
        std::fill_n(res, n, 1);
        input(arr,n);
        for(int i=0;i<n-1;i++){
            if(res[i]!=1){
                cout<<res[i]<<endl;
                continue;
            }else{
                for(int j=i;j<n-1;j++){
                    if((arr[j]>=0&&arr[j+1]<0) || (arr[j]<0 && arr[j+1]>=0)){
                        for(int k=i;k<=j;k++){
                            res[k]+=1;
                        }
                    }else{
                        break;
                    }
                }
            }
        }
        output(res,n);
        cout<<endl;
    }*/
    for(int h=0;h<t;h++){
        int n;
        cin>>n;
        ll arr[n],res[n];
        std::fill_n(res, n, 1);
        input(arr,n);
        for(int i=n-2;i>=0;i--){
            if(arr[i]*arr[i+1]<0){
                res[i]+=res[i+1];
            }
        }  
        output(res,n);
        cout<<endl;
    }
    return 0;
}
