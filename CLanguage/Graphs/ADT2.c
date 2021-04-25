// Using adjacency linked list

#include<stdio.h>
#include<stdlib.h>

struct ListNode{
    int vertex;
    struct ListNode* next;
};

struct edge{
    int source;
    int destination;
};

struct graph{
    int V;
    int E;
    struct ListNode * adjList[];
};

int InsertEdge(struct graph* G,const struct edge E){
    int x,y,n; 
    n=G->V;
    x=E.source;
    y=E.destination;
    if(0>x || x>n || 0>y || y>n){
        printf("Invalid position\n");
        return -1;
    }
    struct ListNode* prev = NULL, *ptr = G->adjList[x]; 
    while(ptr!=NULL){
        if(x==ptr->vertex){
            return 0;
        }
        else{
            prev = ptr;
            ptr=ptr->next;
        }
    }
    if(ptr==NULL){
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->vertex = y;
        newNode->next = NULL;
        if(prev==NULL){
            G->adjList[x] = newNode;
        }else{
            prev->next = newNode;
        }
    }
    return 1;
}

int removeEdge(struct graph* G, const struct edge E){
    
}