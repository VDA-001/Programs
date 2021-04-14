#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int compute(int sym,int op1,int op2){
	switch(sym){
		case '+':return op1+op2;
		case '-':return op1-op2;
		case '*':return op1*op2;
		case '/':return op1/op2;
		case '%':return op1%op2;
		case '^':return op1^op2;
		default:return 0;
	}
}

void main(){
	char pstfx[100],sym;
	double stk[50];
	double op1,op2,res;
	int top=-1,i=0;
	printf("Enter pstfx exprsn\n");
	gets(pstfx);
	for(i=0;i<strlen(pstfx);i++){
		if(isdigit(pstfx[i])){
			stk[++top]=pstfx[i]-'0';
		}else{
			op2=stk[top--];
			op1=stk[top--];
			res=compute(pstfx[i],op1,op2);
			stk[++top]=res;
		}
	}
	res = stk[top--];
	printf("%f\n",res);
}

