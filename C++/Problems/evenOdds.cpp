#include<iostream>
using namespace std;

int main(){
    long int n,k;
    cin>>n;
    cin>>k;
    long int x;
    if(n%2==0){
        x = n/2;
    }
    else{
        x = (int)n/2+1;
    }
    if(k<=x){
        cout<<k*2-1;
    }else{
        k=k%x;
        cout<<k*2;
    }
}