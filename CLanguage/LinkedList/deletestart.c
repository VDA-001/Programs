#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *addr;
};

typedef struct node NODE;
NODE * head=NULL;

//Insert data at the start
void insert(int data){
    NODE * link = (NODE *)malloc(sizeof(NODE));
    link->data = data;
    link->addr=head;
    head = link;
}

//Display the elements of the LinkedList
void display(){
    NODE * link = head;
    if(head == NULL){
        printf("No lists to display \n");
    }
    else{
    while(link!=NULL){
        printf("%d \t",link->data);
        link = link->addr;
    }
    printf("\n");
    }
}

//Delete the first element of the LinkedList
void delete(){
    NODE *link=head;
    if(head == NULL){
        printf("No list to delete \n");
    }
    else
    {
        printf("The list containing the data %d was deleted \n",link->data);
        head = link->addr;
    }
}

int main(){
    int n,data;
    
    for(;;){
        printf("Enter the operation to perform (1.Insert , 2.Display , 3.Delete , 4.Exit): ");
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
            exit(0);
        default:
            break;
        }
    }
}