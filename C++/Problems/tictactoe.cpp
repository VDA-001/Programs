#include<iostream>
using namespace std;

int main(){
    int r[3],c[3],d1,d2,t;
    int a[3][3]={0,0,0,0,0,0,0,0,0};
    cin>>t;
    for(int h=0;h<t;h++){
        int o=0,temp=0;
        d1=1;
        for(int i=0;i<3;i++){
            r[i]=1;
            c[i]=1;
            for(int j=0;j<3;j++){
                cin>>temp;
                a[i][j]=temp;
                if(a[i][j]=='_'){
                    o+=1;
                    continue;
                }
                if(i==0 && j==0){
                    continue;
                }
                else{
                    if(r[i]==1 && a[i][j-1]!=a[i][j]){
                        r[i]=0;
                    }
                    if(i!=0){
                        if(c[j]==1 && a[i][j]!=a[i-1][j]){
                            c[j]=0;
                        }
                    }
                    if(i==j){
                        if(d1==1 && a[i][j]!=a[i-1][j-1]){
                            d1=0;
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
        if(count>1){
            cout<<3<<endl;
        }else if(count==1 && o==0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }

    }

    return 0;
}