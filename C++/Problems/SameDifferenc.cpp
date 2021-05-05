#include<iostream>
using namespace std;

int main(){
    int t,n,count=0;
    cin>>t;
    for(int k=0;k<t;k++){
        count=0;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(i==j){
                    continue;
                }
                if(arr[j]-arr[i] == j-i){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}