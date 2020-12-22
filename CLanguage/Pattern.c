#include<stdio.h>
#include<math.h>
int main(){
int y,n,x,count,a;
scanf("%d",&n);
y=n;
x=(n*2)-1;
for(int i=0;i<x;i++){
	if(i<n){
		count=1;
		a=i;
	}
	else{
		count=0;
		a=i-n;
	}
	for(int j=0;j<x;j++){
		if(count==1){
			if(j==a && i>0){
				n=n-i;
			}
			else if(a==(x-j) && i>0){
				n=n+i;
			}
			printf("%d ",n);
		}
	}
	n=y;
	printf("\n");
}
}
