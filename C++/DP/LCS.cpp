#include<iostream>
#include<string>
using namespace std;

int LCS(char X[],int i,int m,char Y[],int j,int n){
	if(i==m || j==n){
	return 0;
	}else if(X[i]==Y[j]){
	return 1+LCS(X,i+1,m,Y,j+1,n);
	}else{
	return max(LCS(X,i,m,Y,j+1,n),LCS(X,i+1,m,Y,j,n));
	}
}

int main(){
	int n,m;
	cin>>m>>n;
	char X[m],Y[n];
	cin>>X;
	cin>>Y;
	cout<<LCS(X,0,m,Y,0,n)<<endl;
	return 0;
}
