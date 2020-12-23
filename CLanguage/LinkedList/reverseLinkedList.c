#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *addr;
};

typedef struct node NODE;
NODE * head=NULL;
NODE *current=NULL;

//Insert data at the end
void insert(int data){
    NODE * link = (NODE * )malloc(sizeof(NODE));
    if(head == NULL){
        link->data = data;
        link->addr = NULL;
        head = link;
    }
    else
    {
        current->addr = link;
        link->data = data;
        link->addr = NULL;
    }
    current = link;
}

void reverse(){
	NODE* refNode = NULL;
	NODE* node = head;
	NODE* prevNode = NULL;
	while(node){
		prevNode = node;
		node->addr = refNode;
		node = prevNode->addr;
		if(!node){
			head = node;
			break;
		}
		refNode = prevNode;
	}
}

//Display the elements of the LinkedList
int display(){
    if(head==NULL){
        printf("Nothing to display\n");
        return 0;
    }
    NODE * link = head;
    while(link != NULL)
    {
        printf("%d \t",link->data);
        link = link->addr;
    }
    printf("\n");
}

//Delete the first element of the LinkedList
int delete(){
    NODE* link = head;
    if(head==NULL){
        printf("Nothing to delete\n");
        return 0;
    }
    else if(link->addr==NULL){
        printf("The data %d was deleted from rear end of the linked list \n",current->data);
        head = NULL;
        return 0;
    } 
    while(link!=NULL){
        if(link->addr == current){
            link->addr=NULL;
            printf("The data %d was deleted from rear end of the linked list \n",current->data);
            current = link;
        }
        link = link->addr;
    }
}

int main(){
    int n,data;
    
    for(;;){
        printf("Enter the operation to perform (1.Insert , 2.Display , 3.Delete ,4.Reverse , 5.Exit,): ");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            printf("Enter the data to be inserted : ");
            scanf("%d",&data);
            insert(data);
            break;
        case 2:
            display();
            break;
        case 3:
            delete();
            break;
        case 4:
        	reverse();
        	break;
        case 5:
            exit(0);
        default:
        printf("Enter a valid number \n");
            break;
        }
    }
}
