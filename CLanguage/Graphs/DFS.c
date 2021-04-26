//Using adjancency matrix

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define MAX_VERTICE 50
#define MAX_DEGREE 50
int visited[50];
int v;
int s[50],top=-1;

struct graph{
    int V;
    int E;
    int **adjMatrix;
};

struct edge{
    int source;
    int destination;
};

//Make value's of visited array 0
void visitedNull(){
    for(int i=0;i<v;i++){
        visited[i]=0;
    }
}

//DFS Using Recursion
void dfsRec(struct graph* G,int visited[], int start){
    int i;
    visited[start] = 1;
    s[++top] = start;
    for(int i=0;i<G->V;i++){
        if(G->adjMatrix[start][i] == 1 && visited[i]==0){
            printf("%d  ",i);
            dfsRec(G,visited,i);
        }
    }
}

//DFS using brute-force approach
void dfs(struct graph* G,int visited[],int start){
    visitedNull();
    int i,ref;
    visited[start] = 1;
    top=-1;
    s[++top]=start;
    while(top!=-1){
        ref = s[top--];
        printf("%d  ",ref);
        for(i = 0;i<G->V;i++){
            if(G->adjMatrix[ref][i] == 1 && visited[i]==0){
                visited[i]=1;
                s[++top] = i;
            }
        }
    }
}


struct graph* Create(const int vertices){
    assert(vertices>=0);
    int i,j;
    struct graph* G = (struct graph*)malloc(sizeof(struct graph));
    G->V = vertices;
    G->E = 0;
    G->adjMatrix = malloc(sizeof(int)*vertices);
    for(int i=0;i<vertices;i++){
        G->adjMatrix[i] = calloc(vertices,sizeof(int));
        assert(G->adjMatrix!=NULL);
    }
    return G;
}

void displayGraph(struct graph* G){
    for(int i =0;i<G->V;i++){
        for(int j=0;j<G->V;j++){
            printf(" %d ",G->adjMatrix[i][j]);
        }
        printf("\n");
    }
}

void displayEdge(struct graph* G){
    for(int i=0;i<G->V;i++){
        for(int j=0;j<G->V;j++){
            if(G->adjMatrix[i][j]==1)
                printf("%d - %d   ",i,j);
        }
    }
    printf("\n");
}

void insertEdge(struct graph *G,const struct edge E){
    int v,x,y;
    v = G->V;
    x = E.source;
    y = E.destination;
    if(x>=v || y>=v){
        printf("Error");
        exit(0);
    }
    if(G->adjMatrix[x][y]==0){
        G->adjMatrix[x][y]=1;
        //G->adjMatrix[y][x] = 1; for undirected graph
    }
}

void removeEdge(struct graph* G,const struct edge E){
    int v,x,y;
    v=G->V;
    x = E.source;
    y = E.destination;
    if(x>=v || y>=v){
        printf("Error");
        exit(0);
    }
    if(G->adjMatrix[x][y]==1){
        G->adjMatrix[x][y]=0;
        //G->adjMatrix[y][x]=0; for undirected graph
    }
}

void destroyGraph(struct graph* G){
    if(!G){
        printf("Graph empty\n");
    }
    free(G->adjMatrix);
    free(G);
}

struct edge newEdge(int x,int y){
    struct edge E ;
    E.source = x;
    E.destination = y;
    return E;
}

struct graph* InsertGraph(){
    printf("Enter the number of vertices of graph\n");
    scanf("%d",&v);
    struct graph* G = (struct graph*)malloc(sizeof(struct graph));
    G = Create(v);
    if(G){
        printf("Enter the matrix values\n");
        for(int i=0;i<G->V;i++){
            for(int j=0;j<G->V;j++){
                scanf("%d",&G->adjMatrix[i][j]);
            }
        }
    }
    return G;
}

void main(){
    struct graph* G = (struct graph*)malloc(sizeof(struct graph));
    G = InsertGraph();
    displayGraph(G);
    displayEdge(G);
    int x,y;
    printf("Enter the values of x and y\n");
    scanf("%d",&x);
    scanf("%d",&y);
    struct edge E = newEdge(x,y);
    insertEdge(G,E);
    int start;
    printf("Enter the position of start for DFS\n");
    scanf("%d",&start);
    visitedNull();
    printf("DFS using recursion  :  \n");
    dfsRec(G,visited,start);
    printf("\nDFS using bruteforce approach  :  \n");
    dfs(G,visited,start);
    removeEdge(G,E);
    displayGraph(G);
    displayEdge(G);
    destroyGraph(G);
}