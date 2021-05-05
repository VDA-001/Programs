#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int arr[n],num=0,flag=1;
        for(int j=0;j<n;j++){
            cin>>arr[j];
            if(flag==1&&j>1 && arr[j]!=arr[j-1]){
                if(j==2 && arr[2]==arr[0]){
                    num=j-1;
                    flag=0;
                    continue;
                }
                num = j;
                flag=0;
            }
        }
        cout<<num+1<<endl;
    }
    return 0;
}