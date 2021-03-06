// *Shortest path for weighted graph
// Use min priority queue to accomplish Djikstra's Algorithm instead of queue

#include<stdio.h>
#include<stdlib.h>

#define MAX_VERTICE 50;
#define MAX_DEGREE 50;

int q[50],front = -1,rear = -1;
int prev[50],dist[50];
int matr[50][50],n;

void traceRoute();

void ShortestPath(int start, int end){
    int curNode,dstnc,flag=0;
    q[++rear] = start;
    dist[start] = 0;
    while(front<rear){
        curNode = q[++front];
        for(int i=0;i<n;i++){
            dstnc=0;
            if(matr[curNode][i]!=0){
                dstnc = dist[curNode]+matr[curNode][i];
                if(dist[i]>=dstnc){
                    dist[i] = dstnc;
                    prev[i] = curNode;
                }
                else if(dist[i]==-1){
                    dist[i] = dstnc;
                    prev[i] = curNode;
                }
                q[++rear] = i;
            }
        }
    }
    if(dist[end]!=-1)
        traceRoute(start,end);
    else
    {
        printf("No path exists\n");
    }
    
}

void traceRoute(int startNode,int endNode){
    int node = endNode;
    while(node != -1){
        printf("%d  ",node);
        node = prev[node];
    }
    printf("\nThe total distance is : %d\n",dist[endNode]);
}

void main(){
    n = 5;
    printf("Enter the matrix\n");
    for(int i=0;i<5;i++){
        prev[i]=-1;
        dist[i]=-1;
        for(int j=0;j<5;j++){
            scanf("%d",&matr[i][j]);
        }
    }
    ShortestPath(0,4);
}