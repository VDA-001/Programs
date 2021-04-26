// Using adjacency linked list

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

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
    int x,y,v;
    v= G->V;
    x = E.source;
    y = E.destination;
    if(0>x|| x>v || 0>y || y>v){
        return 0;
    }
    struct ListNode* prev = NULL,* ptr = G->adjList[x];
    while(ptr!=NULL){
        if(ptr->vertex==y){
            if(prev==NULL){
                G->adjList[x] = ptr->next;
                free(ptr);
            }else{
                prev->next = ptr->next;
                free(ptr);
            }
            return 1;
        }
        prev = ptr;
        ptr = ptr->next;
    }
}

struct graph* createGraph(const int vertices){
    assert(vertices>=0);
    int i,j;
    struct graph* G = (struct graph*)malloc(sizeof(struct graph));
    G->V = vertices;
    G->E = 0;
    for(int i=0;i<vertices;i++){
        G->adjList[i] = (struct ListNode*)malloc(sizeof(struct ListNode));
        assert(G->adjList[i]!=NULL);
        G->adjList[i]->vertex = i;
        G->adjList[i]->next = NULL;
    }
    return G;
}

struct edge* newEdge(int x, int y){
    struct edge* E = (struct edge*)malloc(sizeof(struct edge));
    assert(E!=NULL);
    E->source = x;
    E->destination = y;
    return E;
}

