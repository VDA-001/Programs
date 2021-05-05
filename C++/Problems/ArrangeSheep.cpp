//*Incorrect

#include<iostream>
#include<string>

using namespace std;
string returnString(int n,string str){
    string refStr="";
    for (int i = 0; i < n; i++)
    {
        if (str[i] =='*')
        {
            refStr+='*';
        }
    }
    return refStr;
}

int main(){
    int t,n,count;
    char temp;
    cin>>t;
    for(int k=0;k<t;k++){
        count=0;
        cin>>n;
        string str;
        cin>>str;
        int i=0;
        string st = returnString(n,str);
        cout<<st;
        while(i!=n){
            if(str[i]=='.'){
                continue;
            }
            if(i>=0 && i<n-1){
                if(str[i+1]=='.'){
                    temp = str[i];
                    str[i]=str[i+1];
                    str[i+1] = temp;
                    count++;
                    i=0;
                }
            }else if(i==n-1){
                if(str[i-1]=='.'){
                    temp = str[i-1];
                    str[i-1]=str[i];
                    str[i] = temp;
                    count++;
                    i=0;
                }
            }
            cout<<str<<" "<<st<<endl;
            if(str.find(st)!=string::npos){
                cout<<count<<endl;
                break;
            }
            i++;
        }
    }
}