#include<stdlib.h>
#include<stdio.h>

struct node{
	int data;
	struct node* next;
};

typedef struct node* NODE;

NODE headA = NULL;
NODE headB = NULL;

//O(m*n)
void intersectingNode(){
	NODE linkA=headA;
	NODE linkB=headB;
	while(linkA){
		
		while(linkB){
			if(linkA->data==linkB->data){
				printf("The list is intersecting at Node that contains data %d\n",linkA->data);
				return;
			}
			linkB = linkB->next;
		}
		linkA = linkA->next;
		linkB = headB;
	}
	printf("The list is not intersecting\n");
}



void main(){
	NODE first = (NODE)malloc(sizeof(struct node));
	NODE second = (NODE)malloc(sizeof(struct node));
	NODE third = (NODE)malloc(sizeof(struct node));
	NODE fourth = (NODE)malloc(sizeof(struct node));
	NODE fifth = (NODE)malloc(sizeof(struct node));
	
	first->data = 1;
	second->data = 2;
	third->data=3;
	fourth->data=4;
	fifth->data=5;
	
	headA = first;
	headB = second;
	
	first->next = fourth;
	second->next = third;
	third->next = fourth;
	fourth->next = fifth;
	fifth->next = NULL;
	
	intersectingNode();
}
