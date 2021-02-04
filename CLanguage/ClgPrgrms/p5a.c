#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int compute(int op1, int op2, char symbol){
    switch(symbol){
        case '+': return op1+op2;
        case '-': return op1-op2;
        case '*': return op1*op2;
        case '/':  return op1/op2;
        case '^': return pow(op1,op2);
        case '%': return (int)op1%(int)op2;
        default: return 0;
    }
}

void main(){
    double s[20],op1,op2,res;
    int i,top=-1;
    char pstfx[20],symbol;
    printf("Enter the postfix expression\n");
    //fgets(char,pstfx,stdin);
    scanf("%s",pstfx);
    for(i=0;i<strlen(pstfx);i++){
        symbol = pstfx[i];
        if(isalnum(symbol)){
            s[++top] = symbol - '0';
        }
        else{
            op2 =s[top--];
            op1 = s[top--];
            res = compute(op1,op2,symbol);
            s[++top] = res;
        }
    }
    res = s[top--];
    printf("The value is %f\n",res);
}