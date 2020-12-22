#include<stdlib.h>
#include<stdio.h>

struct node {
	int data;
	struct node* next;
};

typedef struct node* NODE;

NODE head = NULL;

void cyclicLoop(){
	NODE next=head;
	NODE nextOfNext = head;
	while(nextOfNext && nextOfNext->next){
		if(next->next != NULL){
			next=next->next;
			nextOfNext=nextOfNext->next->next;
		}else{
			printf("This is not a cyclic list \n");
			break;
		}
		if(next==nextOfNext){
			printf("This is a cyclic list \n");
			next=next->next;
			int count=1;
			while(next!=nextOfNext){
					next=next->next;
					if(next==nextOfNext){
						count+=1;
						printf("%d \n",count);
						break;
					}
					count+=1;
			}
			break;
		}
	}
}

void main(){
	NODE f1 = (NODE)malloc(sizeof(struct node));
	NODE f2 = (NODE)malloc(sizeof(struct node));
	NODE f3 = (NODE)malloc(sizeof(struct node));
	NODE f4 = (NODE)malloc(sizeof(struct node));
	NODE f5 = (NODE)malloc(sizeof(struct node));
	
	f1->data = 5;
	f2->data = 10;
	f3->data = 23;
	f4->data = 653;
	f5->data = 1;
	
	f1->next=f2;
	f2->next=f3;
	f3->next=f4;
	f4->next=f5;
	f5->next=f1;
	
	head = f1;
	
	cyclicLoop();
}
	
	
	
