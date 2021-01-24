#include<stdlib.h>
#include<stdio.h>

struct Stack{
    int *array;
    int capacity;
    int top;
};

struct Stack *createStack(int capacity){
    struct Stack *S = malloc(sizeof(struct Stack));
    if(!S){
        return NULL;
    }
    S->capacity = capacity;
    S->array = malloc(sizeof(int)*S->capacity);
    S->top = -1;
    if(!S->array){
        return NULL;
    }
    return S;
}

void doubleStack(struct Stack *S){
    S->capacity *= 2;
    S->array = realloc(S->array, S->capacity*sizeof(int));
    return;
}

void push(int data,struct Stack *S){
    if(S->capacity == S->top+1){
        doubleStack(S);
    }
    S->array[++S->top] = data;
}

void pop(struct Stack *S){
    if(S->top == -1){
        printf("Stack is Empty\n");
        return;
    }
    printf("The deleted item is %d \n",S->array[S->top--]);
}

void display(struct Stack *S){
    if(!S){
        printf("Stack do not exist \n");
        return;
    }
    if(S->top == -1){
        printf("Stack is Empty\n");
        return;
    }
    for(int i=0;i<=S->top;i++){
        printf("%d\t",S->array[i]);
    }
    printf("\n");
}

void DeleteStack(struct Stack *S){
    if(S){
        if(S->array){
            free(S->array);
        }
        free(S);
    }
}

void main(){
    struct Stack *stk = NULL;
    for(;;){
        int ch,cap,data;
        printf("1.Create Stack 2.Insert into stack 3.Delete from stack 4.Display 5.Delete stack 6.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter the capacity\n");
                scanf("%d",&cap);
                stk = createStack(cap);
                break;
            case 2:
                printf("Enter the data \n");
                scanf("%d",&data);
                push(data,stk);
                break;
            case 3:
                pop(stk);
                break;
            case 4:
                display(stk);
                break;
            case 5:
                DeleteStack(stk);
                break;
            case 6:
                exit(0);
            default:
                exit(0);
        }
    }
}