#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct poly{
    int cf;
    int px,py,pz;
    struct poly* next;
};

typedef struct poly* NODE;

NODE getnode(){
    NODE ref = (NODE)malloc(sizeof(struct poly));
    if(!ref){
        printf("Insufficient space\n");
        exit(0);
    }
    ref->next=NULL;
    return ref;
}

void display(NODE head){
    NODE cur = head;
    if(head == head->next){
        printf("Nothing to display\n");
        return;
    }
    while(cur->next!=head){
        printf("%dx^%dy^%dz^%d+",cur->cf,cur->px,cur->py,cur->pz);
        cur = cur->next;
    }
    if(cur!=head){
        printf("%dx^%dy^%dz^%d\n",cur->cf,cur->px,cur->py,cur->pz);
        cur=cur->next;
    }
}

void insertRear(int cf, int px, int py, int pz,NODE head){
    NODE temp = (NODE)malloc(sizeof(struct poly));
    temp->cf = cf;
    temp->px = px;
    temp->py = py;
    temp->pz = pz;
    temp->next = head;
    NODE cur =head;
    if(head == head->next){
        head->next = temp;
        return;
    }
    while(cur->next!=head){
        cur = cur->next;
    }
    if(cur->next = head){
        cur->next = temp;
    }
}

void readPoly(NODE head){
    int cf,px,py,pz,num = 0;
    do{
        printf("Enter the exponents of x,y,z respectively\n");
        scanf("%d%d%d",&px,&py,&pz);
        printf("Enter the coefficient\n");
        scanf("%d",cf);
        insertRear(cf,px,py,pz,head);
        printf("Press 1 if you want to continue else 0\n");
        scanf("%d",num);
    }while(num==1);
    printf("\n");
}

void addPoly()