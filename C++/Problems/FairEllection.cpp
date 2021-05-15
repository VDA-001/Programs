#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n,m;
        cin>>n>>m;
        int arrA[n],arrB[m],count=0,countA=n,countB=m,sumA=0,sumB=0;
        for(int i=0;i<n;i++){
            cin>>arrA[i];
            sumA+=arrA[i];
        }
        for(int j=0;j<m;j++){
            cin>>arrB[j];
            sumB+=arrB[j];
        }
        int arrminA=0,minIndexA=0,arrmaxB=0,maxIndexB=0;
        while((sumA<=sumB)&&(countA>0 && countB>>0)){
            arrminA=*min_element(arrA, arrA + n);
            minIndexA=std::distance(arrA,std::find(arrA,arrA+n,arrminA));
            arrmaxB=*max_element(arrB, arrB + m);
            maxIndexB=std::distance(arrB,std::find(arrB,arrB+m,arrmaxB));
            sumA=sumA+arrmaxB-arrminA;
            sumB=sumB+arrminA-arrmaxB;
            arrA[minIndexA] = arrmaxB;
            arrB[maxIndexB] = arrminA;
            countA-=1;
            countB-=1;
            count++;
        }
        if(sumA>sumB){
            cout<<endl<<count<<endl;
            continue;
        }else if(countA<=0 || countB<=0){
            cout<<-1<<endl;
        }
    }
    return 0;
}