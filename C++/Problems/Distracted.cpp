#include<iostream>
#include<string>
using namespace std;

int checkArray(int j,char arr[],char ch){
    for(int i=0;i<=j;i++){
        if(arr[i]==ch){
            return -1;
        }
    }
    return 1;
}

int main(){
    int t,n,flag=1;
    string str;
    cin>>t;
    for(int k=0;k<t;k++){
        
        cin>>n;
        cin>>str;
        char arr[n];
        int j=0,x;
        arr[0] = str[0];
        for(int i=1;i<n;i++){
            flag=1;
            if(str[i]==str[i-1]){
                continue;
            }
            x=checkArray(j,arr,str[i]);
            if(x!=-1){
                arr[++j] = str[i];
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else if(flag==0){
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}