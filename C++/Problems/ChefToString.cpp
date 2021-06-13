#include<iostream>
#include<string>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double

const int mod = 1e+7;

#define input(arr,n) for(ull i=0;i<n;i++){cin>>arr[i];}
#define output(arr,n) for(ull i=0;i<n;i++){cout<<arr[i];}
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main(){
    string S;
    cin>>S;
    //Approach -1 
    /*string ref="CHEF";
    bool boolVal=true;
    int count=0;
    while(boolVal){
        int k=0,i=0;
        bool refBool=true;
        while(i<S.length()){
            if(S[i]==ref[k]){
                if(S[i]=='F'){
                    count++;
                    k=0;
                    S.erase(S.begin()+i);
                    break;
                }
                k++;
                S.erase(S.begin()+i);
                refBool=false;
            }else{i++;}
        }
        if(refBool){
            boolVal=false;
        }
    }
    cout<<count<<endl;*/

    //Approach - 2
    int c=0,ch=0,che=0,chef=0;
    for(int i=0;i<S.length();i++){
        if(S[i]=='C'){
            c++;
        }
        else if(S[i]=='H'){
            if(c>0){
                c--;
                ch++;
            }
        }
        else if(S[i]=='E'){
            if(ch>0){
                ch--;
                che++;
            }
        }
        else if(S[i]=='F'){
            if(che>0){
                che--;
                chef++;
            }
        }
    }
    cout<<chef<<endl;
    return 0;
}
