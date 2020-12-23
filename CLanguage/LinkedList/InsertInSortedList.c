#include<stdlib.h>
#include<stdio.h>

struct node{
	int data;
	struct node* next;
};

typedef struct node* NODE;

NODE head=NULL;

void insert(int data){
	NODE link = head;
	NODE new = (NODE)malloc(sizeof(struct node));
	new->data = data;
	if(!link){
		head = new;
		new->next = NULL;
	}else if(link->data > data){
		new->next = link;
		head = new;
	}
	else{
		while(link){
			if((link->data <= data)&&(link->next && link->next->data>data) ){
				new->next=link->next;
				link->next=new;
				break;
			}else if(!link->next){
				link->next = new;
				new->next = NULL;
				break;
			}
			link=link->next;
		}
	}
	link=head;
	while(link){
		printf("%d ",link->data);
		link=link->next;
	}
	printf("\n");
}

void main(){
	int i=1;
	while(i){
		int data,j;
		printf("Enter data \n");
		scanf("%d",&data);
		insert(data);
		printf("Continue? Yes:1 No:0 \n ");
		scanf("%d'",&j);
		if(!j){
			i=0;
		}
	}
}
