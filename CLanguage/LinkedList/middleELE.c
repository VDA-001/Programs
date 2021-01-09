#include<stdlib.h>
#include<stdio.h>

struct node{
int data;
struct node* next;
};

typedef struct node* NODE;

NODE head=NULL;
int count=0;

struct node insertFirst(int data){
        NODE new=(NODE)malloc(sizeof(struct node));
        new->data=data;
        new->next=head;
        head=new;
        count+=1;
        printf("%d\n",count);
}

void deleteFirst(){
        NODE headNode=head;
        head=head->next;
        free(headNode);
        count-=1;
        printf("%d\n",count);
}

void middleELE(){
	
}

void main(){

        for(;;){
                int ch,data,k;
                printf("Enter your choice 1. Insert at front 2. delete at front 3. find kth node from last \n");
                scanf("%d",&ch);
                switch(ch){
                        case 1:
                                printf("Enter data: ");
                                scanf("%d",&data);
                                insertFirst(data);
                                break;
                        case 2:
                                deleteFirst();
                                break;
                        case 3:
                                printf("Insert k value: ");
                                scanf("%d",&k);
                                kthNode(k);
                                break;
                        default:
                                exit(0);
                }
        }
}

