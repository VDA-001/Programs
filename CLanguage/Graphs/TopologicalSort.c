//Using adjancency matrix

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>

#define MAX_VERTICE 50
#define MAX_DEGREE 50
int q[MAX_VERTICE],front=-1,rear=-1;

struct graph{
    int V;
    int E;
    int **adjMatrix;
};

struct edge{
    int source;
    int destination;
};

int countIndegree(struct graph* G, int node){
    int i,indegree=0;
    for(i = 0;i<G->V;i++){
        if(G->adjMatrix[i][node]==1){
            indegree++;
        }
    }
    return indegree;
}

void insertQueue(struct graph* G,int node){
    if(rear==MAX_VERTICE-1){
        printf("Queue full cannot insert\n");
        return;
    }
    else{
        if(front==-1){
            front = 0;
        }
        q[++rear] = node;
    }
}

int deQueue(struct graph* G){
    if(front==-1){
        printf("Queue empty\n");
        return -1;
    }
    return q[front++];
}

void TopologicalSort(struct graph* G){
    int inDegree[G->V],topologicalSort[G->V];
    int i,j;
    for(i=0;i<G->V;i++){
        inDegree[i]=countIndegree(G,i);
        if(inDegree[i]==0){
            insertQueue(G,i);
        }
    }
    j=0;
    int delNode;
    while(front<=rear){
        delNode = deQueue(G);
        topologicalSort[j]=delNode;
        j++;
        for(j=0;j<G->V;j++){
            if(G->adjMatrix[delNode][i]==1){
                G->adjMatrix[delNode][i]=0;
                inDegree[j]-=1;
                if(inDegree[i]==0){
                    insertQueue(G,i);
                }
            }
        }
    }
    printf("The topological sort is given by : \t");
    for(i=0;i<G->V;i++){
        printf(" %d  ",topologicalSort[i]);
    }
}

void displayGraph(struct graph* G){
    for(int i =0;i<G->V;i++){
        for(int j=0;j<G->V;j++){
            printf(" %d ",G->adjMatrix[i][j]);
        }
        printf("\n");
    }
}

struct graph* createGraph(const int vertices){
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

struct edge newEdge(int x,int y){
    struct edge E ;
    E.source = x;
    E.destination = y;
    return E;
}

void rand_init(){
    time_t t;
    srand((unsigned) time(&t));
}

struct graph* randomGraph(const int N,const float p){
    int i,j;
    struct edge E;
    struct graph * G = createGraph(N);
    rand_init();
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(rand()<p*RAND_MAX){
                E = newEdge(i,j);
                insertEdge(G,E);
            }
        }
    }
    return G;
}

void main(){
    struct edge E;
    struct graph * G = randomGraph(10,0.15);
    displayGraph(G);
    TopologicalSort(G);
}