#include<stdio.h>
#include<stdlib.h>

int count=0,n,m,*ht,key[20],index=0;

void insert(int key){
	index=key%m;
	while(ht[index]!=-1){
		index=(index+1)%m;
	}ht[index]=key;
	count++;
}

void display(){
	if(count==0){
		printf("Nothing to display\n");
		return;
	}
	for(int i=0;i<m;i++){
		printf("T[%d] = %d\n",i,ht[i]);
	}
}

void main(){
	printf("Enter the number of employee records\n");
	scanf("%d",&n);
	printf("Enter the length of hash table\n");
	scanf("%d",&m);
	ht=(int *)malloc(m*sizeof(int));
	for(int i=0;i<m;i++)
		ht[i]=-1;
	printf("Enter the employee key numbers\n");
	for(int i=0;i<n;i++){
		scanf("%d",&key[i]);
	}
	for(int i=0;i<n;i++){
		if(count == m){
			printf("Hash table full\n");
			break;
		}
		insert(key[i]);
	}display();
}
