#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define size 50
char s[size];
int top = -1;

void push(char ch){
    s[++top] = ch;
}

char pop(){
    return s[top--];
}

int precedence(char ch){
    switch (ch)
    {
    case '#':return 0;
    case '(':return 1;
    case '+':
    case '-':return 2;
    case '*':
    case '/':
    case '%':return 3;
    case '^':return 4;
    default:
        exit(0);
    }
}

void main(){
    char pstfx[size],infx[size],ch;
    int i=0,k=0;
    printf("Read the Infix expression\n");
    scanf("%s",infx);
    push('#');
    while((ch=infx[i++])!='\0'){
        if(ch=='('){
            push(ch);
        }
        else if(isalnum(ch)){
            pstfx[k++]=ch;
        }
        else if(ch==')'){
            while(s[top]!='('){
                pstfx[k++] = pop();
            }
            char elem = pop();
        }
        else{
            while(precedence(s[top])>=precedence(ch)){
                pstfx[k++] = pop();
            }
            push(ch);
        }
    }
    while(s[top]!='#'){
        pstfx[k++] = pop();
    }
    pstfx[k] = '\0';
    printf("The infix expression : %s\n The postfix expression : %s\n",infx,pstfx);
}