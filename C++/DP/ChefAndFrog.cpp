#include<iostream>
#include<vector>
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
    int N,K,P;
    cin>>N>>K>>P;
    int arr[N];
    input(arr,N);
    int ref[N][N];
    for(int h=0;h<P;h++){
        int A,B;
        cin>>A>>B;
        int i=A-1,j=A;
        while(j<B){
            if(arr[j]-arr[i]<=K){
                cout<<"HI"<<endl;
                ref[i][j]=arr[j]-arr[i];
                i++;
                j++;
            }else{
                cout<<"NO"<<endl;
                break;
            }
        }
        cout<<"YES"<<endl;
    }
    return 0;
}
