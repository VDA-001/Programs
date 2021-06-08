//Top-down approach Memoization
#include<iostream>
using namespace std;
int fctarr[50]={};

int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    if(fctarr[n]!=0){
        return fctarr[n];
    }
    return fctarr[n]=n*fact(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}