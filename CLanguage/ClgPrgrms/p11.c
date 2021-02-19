#include<stdio.h>
#include<stdlib.h>
int a[50][50],n,visited[50],front=-1,rear=-1,q[20],top=-1,s[50];

void bfs(int v){
    int cur,i;
    visited[v] = 1;
    q[++rear] = v;
    while(rear!=front){
        cur = q[++front];
        for(i=1;i<=n;i++){
            if((a[cur][i] == 1) && (visited[i]==0)){
                visited[i] = 1;
                printf("%d ",i);
                q[++rear] = i;
            }
        }
    }
    printf("\n\n");
}

void dfs(int v){
    visited[v] = 1;
    s[++top] = v;
    int i,cur;
    for(i=1;i<=n;i++){
        if(a[v][i] == 1 && visited[i]==0){
            printf("%d ",i);
            dfs(i);
        }
    }
}

void main(){
    int ch,start;
    printf("Enter the number of vertices\n");
    scanf("%d",&n);
    printf("Enter the adjacency matrix\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter the starting vertex\n");
    scanf("%d",&start);
    printf("Enter the traversal mehod 1.BFS 2.DFS 3.Exit\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:printf("The nodes which are reachable by vertex %d are:\n",start);
            bfs(start);
            for(int i=1;i<=n;i++){
                if(visited[i]==0){
                    printf("The vertex that is not reachable is %d\n",i);
                }
            }
            break;
        case 2: printf("Nodes which are reachable by %d\n",start);
        dfs(start);
        break;
        case 3:exit(0);
        default: exit(0);
    }
}