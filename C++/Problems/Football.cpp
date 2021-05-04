#include<iostream>
#include<string>
using namespace std;

int main(){
    std::string s1="1111111",s2="0000000",S;
    cin>>S;
    if(S.find(s1)!=std::string::npos || S.find(s2)!=std::string::npos){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}