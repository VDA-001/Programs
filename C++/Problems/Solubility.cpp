#include<iostream>
using namespace std;

int main(){
    int t,X,A,B,ans;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>X>>A>>B;
        ans = A+(100-X)*B;
        cout<<ans*10<<endl;
    }
    return 0;
}