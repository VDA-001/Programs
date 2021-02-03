#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX],top = -1;
void push(){
        if(top == MAX-1){
                printf("Stack is full\n");
                return;
        }
        int data;
        printf("Enter the data to be inserted: \n");
        scanf("%d",&data);
        stack[++top] = data;
}

void pop(){
        if(top == -1){
                printf("Stack is Empty\n");
                return;
        }
        printf("The deleted data is %d\n",stack[top--]);
}

void display(){
        if(top == -1){
                printf("Nothing to display\n");
                return;
        }
        int arr[MAX] ;
        for(int j=0;j<=top;j++){
        	arr[j] = stack [j];
        }
        for(int i = 0; i<=top; i++){
                printf("%d\t",arr[i]);
        }
        printf("\n");
}

void pali(){
        int rev[MAX],i=0,j=top,boolval = 1;
        if(top==-1){
                printf("Stack is empty\n");
                return;
        }
        while(i<=top && j>=0){
                rev[i] = stack[j];
                i++;
                j--;
        }
        for(i=0;i<=top;i++){
                if(rev[i]!=stack[i]){
                        boolval = 0;
                        break;
                }
        }
        if(boolval){
                printf("It is a palindrome\n");
        }else{
                printf("It is not a palindrome\n");
        }
}

void main(){
        int ch;
        for(;;){
                printf("1. Push 2. Pop 3. Check for palindrome 4. display 5. exit\n");
                scanf("%d",&ch);
                switch(ch){
                        case 1:push();
                               break;
                        case 2:pop();
                               break;
                        case 3: pali();
                                break;
                        case 4: display();
                                break;
                        default: exit(0);
                }
        }
}
