#include<iostream>
using namespace std;

int main(){
    int n,imp;
    cin>>n;
    int arr[n],x = n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        imp=-1;
        for(int j=i;j<n;j++){
            if(i!=j && arr[i]+arr[j]<=4){
                if(imp!=-1){
                    if(arr[i]+arr[j]>arr[i]+arr[imp]){
                        imp = j;
                    }
                }else{
                    imp = j;
                }
            }
        }
        if(imp==-1){
            continue;
        }
        x-=1;
        arr[imp]+=arr[i];
    }
    cout<<x;
    return 0;
}