#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char s[100];
int top=-1;

int precedence(char ch){
	switch(ch){
		case '#':return 0;
		case '(':return 1;
		case '+':
		case '-':return 2;
		case '*':
		case '/':
		case '%':return 3;
		case '^':return 4;
		default:return 0;
	}
}
char pop(){
	return s[top--];
}
void push(char ch){
	s[++top]=ch;
}

void main(){
	char ch,pstfx[100],infx[100];
	int i=0,j=0;
	printf("Enter the infix expression\n");
	scanf("%s",infx);
	push('#');
	while((ch=infx[i++])!='\0'){
		if(ch=='('){
			push(ch);
		}else if(isalnum(ch)){
			pstfx[j++]=ch;
		}
		else if(ch==')'){
			while(s[top]!='(')
				pstfx[j++]=pop();
			pop();
		}
		else{
			while(precedence(s[top])>=precedence(ch)){
				pstfx[j++]=pop();
			}
			push(ch);
		}
	}
	while(s[top]!='#')
		pstfx[j++]=pop();
	printf("%s\n",pstfx);
	}
