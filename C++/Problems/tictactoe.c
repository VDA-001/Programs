#include<stdio.h>
#include<stdlib.h>
int main(){
    int r[4],c[4],d1,d2,t;
    char a[3][3];
    scanf("%d",&t);
    for(int h=0;h<t;h++){
        int o=0;
        d1=1,d2=1;
        r={1,1,1};
        c={1,1,1};
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                scanf("%c",&a[i][j]);
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
                        cout<<c[j]<<endl;
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
            printf("%d\n",3);
        }else if((count==0 && o!=0)){
            printf("%d\n",2);
        }
        else{
            printf("%d\n",1);
        }
    }
    return 0;
}