#include<iostream>
using namespace std;

int checkEquality(int ar[],int n){
    for(int i=0;i<n-1;i++){
        if(ar[i]!=ar[i+1]){
            return 0;
        }
    }
    return 1;
}

int getMax(int ar[],int n){
    int max=0;
    for(int i=1;i<n;i++){
        if(ar[i]>ar[i-1]){
            max=i;
        }
    }
    cout<<max;
    return max;
}

int main(){
    int t,n;
    cin>>t;
    for(int j=0;j<t;j++){
        cin>>n;
        int ar[n],count=0;
        for(int k=0;k<n;k++){
            cin>>ar[k];
        }
        int x=checkEquality(ar,n),y=0;
        if(x==1){
            cout<<count<<endl;
            continue;
        }else{
            while(x==0){
                y=getMax(ar,n);
                cout<<y<<endl;
                ar[y]-=1;
                x=checkEquality(ar,n);
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}