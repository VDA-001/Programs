#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int a,b;
	float result=0;
	char ch;
	printf("Choose the operation to perform (+,-,*,/) : ");
	scanf("%c",&ch);
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	switch(ch){
	case '+':result=a+b;
		break;
	case '-':result=a-b;
		break;
	case '*':result=a*b;
		break;
	case '/':result=a/b;
		break;
	default:printf("Invalid Input\n");
		exit(0);
	}
	printf("Result = %f\n",result);
}
	
		
