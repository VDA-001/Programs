// *Shortest path for weighted graph
// Use min priority queue to reduce complexity

#include<stdio.h>
#include<stdlib.h>


int q[50],front = -1,rear = -1;
int prev[50],dist[50];
int matr[50][50],n;

void traceRoute();
int inQueue(int i){
    for(int j=front;j<=rear;j++){
        if(i==q[j]){
            return 1;
        }
    }
    return 0;
}

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
                if(dist[i] > dstnc){
                    dist[i] = dstnc;
                    prev[i] = curNode;
                    if(!inQueue(i)){
                        q[++rear] = i;    
                    }
                }
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
        dist[i]=50;
        for(int j=0;j<5;j++){
            scanf("%d",&matr[i][j]);
        }
    }
    ShortestPath(0,4);
}