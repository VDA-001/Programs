// *Shortest path for unweighted graph

#include<stdio.h>
#include<stdlib.h>

#define MAX_VERTICE 50;
#define MAX_DEGREE 50;

int q[50],front = -1,rear = -1;
int visited[50],prev[50],dist[50];
int matr[50][50],n;

int unvisitedNode();
void traceRoute();

void ShortestPath(int start, int end){
    int neighbourNode, curNode;
    visited[start]=1;
    q[++rear] = start;
    while(front<=rear){
        curNode = q[++front];
        while(unvisitedNode(curNode) != -1){
            neighbourNode = unvisitedNode(curNode);
            visited[neighbourNode] = 1;
            prev[neighbourNode] = curNode;
            dist[neighbourNode] = dist[curNode]+1;
            q[++rear]=neighbourNode;
            if(neighbourNode==end){
                front = rear+1;
                break;
            }
        }
    }
    traceRoute(start,end);
}

int unvisitedNode(int node){
    for(int i=0;i<n;i++){
        if(matr[node][i]==1 && visited[i]==0){
            return i;
        }
    }
    return -1;
}

void traceRoute(int startNode,int endNode){
    int node = endNode;
    while(node != -1){
        printf("%d  ",node);
        node = prev[node];
    }
    printf("\nThe total distance is : %d",dist[endNode]);
}

void main(){
    n = 5;
    printf("Enter the matrix\n");
    for(int i=0;i<5;i++){
        visited[i]=0;
        prev[i]=-1;
        dist[i]=0;
        for(int j=0;j<5;j++){
            scanf("%d",&matr[i][j]);
        }
    }
    ShortestPath(0,4);
}