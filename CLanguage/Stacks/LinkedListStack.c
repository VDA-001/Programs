#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int data;
    struct Stack* next;
};

struct TopNode{
    struct TopNode* top;
};

struct  CreateStack(){
    struct TopNode *S;
    S = malloc(sizeof(struct TopNode));

}