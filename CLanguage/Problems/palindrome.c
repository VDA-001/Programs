#include<stdio.h>
int main(){
	int n,result=0,q,res;
	printf("Enter a number\n");
	scanf("%d",&n);
	q=n;
	while(q!=0)
	{
		res=q%10;
		result=result*10+res;
		q=q/10;
	}
	if(result==n){
		printf("It is a palindrome\n");
	}
	else{
		printf("It is not a palindrome\n");
	}
	return 0;
}
