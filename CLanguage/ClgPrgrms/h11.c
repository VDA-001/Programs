#include<stdio.h>
#include<stdlib.h>

int visited[50],a[50][50],n;
int s[50],top=-1;
int q[50],front=-1,rear=-1;

void bfs(int v){
	int i,cur;
	visited[v]=1;
	q[++rear]=v;
	while(rear!=front){
		cur=q[++front];
		for(i=1;i<=n;i++){
			if((a[cur][i]==1) && (visited[i]==0)){
				q[++rear]=i;
				visited[i]=1;
				printf("%d",i);
			}
		}
	}
}

void dfs(int v){
	s[++top]=v;
	visited[v]=1;
	int i;
	for(i=1;i<=n;i++){
		if(a[v][i]==1 && visited[i]==0){
			printf("%d",i);
			dfs(i);
		}
	}
}

void main(){
	printf("Enter the number of vertice in graph\n");
	scanf("%d",&n);
	printf("Enter the array element\n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	visited[i]=0;
	int start;
	printf("Enter the starting vertex\n");
	scanf("%d",&start);
	printf("1.BFS 2.DFS 3.Exit\n");
	printf("Enter the choice\n");
	int ch;
	scanf("%d",&ch);
	switch(ch){
		case 1:printf("Nodes reachable from starting vertex are\n");
			bfs(start);
			for(int i=1;i<=n;i++){
				if(visited[i]==0)
					printf("Not reachable vertex is %d ",i);
			}
		case 2:printf("Nodes reachable from starting vertex are\n");
		       dfs(start);
		default:exit(0);
	}
}

