#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<iterator>

using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double

const int mod = 1e+7;

#define input(arr,n) for(ull i=0;i<n;i++){cin>>arr[i];}
#define output(arr,n) for(ull i=0;i<n;i++){cout<<arr[i];}
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        std::vector<int> arr(N);
        int count=1;
        input(arr,N);
        for(int i=0;i<N;i++){
            for(int j=0;j<i;j++){
                if(arr[j]==arr[i]){
                    count++;
                    break;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
