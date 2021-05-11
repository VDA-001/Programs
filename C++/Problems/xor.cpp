#include<iostream>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;

int power(long long x, unsigned int y, int p)
{
    
    int res = 1;
    x = x % p; 
    if (x == 0) return 0; 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    cout<<res;
    return res-1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,count=0,a1,a2;
    unsigned long long int x=0;
    unsigned long int mod=1000000007;
    int t;
    cin>>t;
    for(int h=0;h<t;h++){
        cin>>n;
        count=0;
        x=0;a1=0;a2=0;
        unsigned long long int r = pow(2,n);//power(2,n,mod);
        while(x<=r){
            a1=(x^(x+1))%mod;
            a2=((x+2)^(x+3))%mod;
            if(a1==a2){
                count = (count+1)%mod;
            }
            x = (x+1)%mod;
        }
        cout<<count<<endl;
    }
    return 0;
}
