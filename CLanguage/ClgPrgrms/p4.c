#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#define MAX 50
int s[MAX],top=-1;

void push(char ch){
		s[++top] = ch;
}

char pop(){
	return s[top--];
}

int precedence(char elem){
	switch(elem){
		case '#': return 0;
		case '(' : return 1;
		case '+': 
		case '-':return 2;
		case '*': 
		case '/':
		case '%': return 3;
		case '^': return 4;
		default:exit(0);
	}
}

void main(){
	char psfx[MAX],infx[MAX],ch, elem; int k=0,i=0;
	printf("Enter the Infix expression\n");
	scanf("%s", infx);
	push('#');
	while((ch = infx[k++])!='\0'){
		if(ch=='('){
			push(ch);
			
		}
		else if(isalnum(ch)){
			psfx[i++] = ch;	
		}	
		else if(ch == ')'){
			while(s[top]!='(')
				psfx[i++] = pop();	
			elem = pop();
		}
		else{
			while(precedence(s[top])>=precedence(ch)){
				psfx[i++]=pop();
			}
			push(ch);
		}
	}
	while(s[top]!='#')
	psfx[i++] = pop();
	psfx[i] = '\0';
	printf("The postfix for given infix is %s\n",psfx);
}
