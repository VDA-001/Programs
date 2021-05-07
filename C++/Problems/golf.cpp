#include<iostream>
using namespace std;

int main(){
    int t,x,k,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>x>>k;
        if(k!=0){
            int last = (n+1)-(n+1)%k;
            int z = (n+1)-last;
            if((x%k==0)){
                cout<<"YES\n";
                continue;
            }
            if((z!=0)&&((n+1)-x)%z==0){
                cout<<"YES\n";
                continue;
            }
        }
        cout<<"NO\n";
    }
    return 0;
}