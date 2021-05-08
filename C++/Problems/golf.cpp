#include<iostream>
using namespace std;

int main(){
    int t,x,k,n,j=0,flag;
    cin>>t;
    for(int i=0;i<t;i++){
        flag=1;
        j=0;
        cin>>n>>x>>k;
        while(j<=n+1){
            if(j*k>x && (n+1)-(j*k)<x){
                break;
            }
            if(j*k==x || (n+1)-(j*k)==x){
                flag = 0;
                cout<<"YES\n";
                break;
            }
            j+=1;
        }
        if(flag==1){
            cout<<"NO\n";
        }
    }
    return 0;
}