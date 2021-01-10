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

//By using global variable count
/*
void middleELE(){
	int mid = (count%2 == 0) ? (count/2)-1 : (count/2);
	NODE node = head;
	while(mid>0){
		node = node->next;
		mid-=1;
	}
	printf("The data in middle node is %d\n",node->data);
		
}*/

//Without using global var count and in one scan using efficient approach
void middleELE(){
	NODE slow = head;
	NODE fast = head;
	while(fast){
		if(fast->next!=NULL){
			fast = fast->next->next;
			slow = slow->next;
		}else
			break;
	}
	printf("The middle element is %d\n",slow->data);		
}

void main(){

        for(;;){
                int ch,data,k;
                printf("Enter your choice 1. Insert at front 2. delete at front 3. middle element \n");
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
                                middleELE();
                                break;
                        default:
                                exit(0);
                }
        }
}

