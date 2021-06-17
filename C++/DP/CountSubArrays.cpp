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
        int n,count=0;
        cin>>n;
        int arr[n];
        input(arr,n);
        for(int i=0;i<n;i++){
            int k=i;
            for(int j=i;j<n;j++){
                if(arr[k]>arr[j]){
                    break;
                }else{
                    count++;
                    if(arr[k]<arr[j]){
                        k=j;
                    }
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
