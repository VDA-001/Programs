#include<iostream>
using namespace std;

int main(){
    int d1,d2,t;
    char a[3][3];
    cin>>t;
    for(int h=0;h<t;h++){
        int o=0;
        d1=1,d2=1;
        int r[3]={1,1,1};
        int c[3]={1,1,1};
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>a[i][j];
                if(a[i][j]=='_'){
                    o+=1;
                    r[i]=0;
                    c[i]=0;
                }
                if(i==0 && j==0){
                    continue;
                }
                else{
                    if(r[i]!=0 && (j!=0 && a[i][j]!=a[i][j-1])){
                        r[i]=0;
                    }
                    if(c[j]!=0 && (i!=0 && a[i][j]!=a[i-1][j])){
                        c[j]=0;
                    }
                    if(i==j){
                        if(d1==1 && (a[i][j]!=a[i-1][j-1])){
                            d1=0;
                        }
                    }
                    if((i==j && i==1) || (i==2 && j==0)){
                        if(d2 && (a[i][j]!=a[i-1][j+1])){
                            d2=0;
                        }
                    }
                }
            }
        }
        int count=0;
        for(int i=0;i<3;i++){
            if(r[i]==1){
                count++;
                
            }
            if(c[i]==1){
                count++;
            }
        }
        if(d1==1){
            count++;
        }
        if(d2 == 1){
            count++;
        }
        if(count>1){
            cout<<3<<endl;
        }else if((count==0 && o!=0)){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}