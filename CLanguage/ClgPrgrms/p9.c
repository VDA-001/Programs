#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct poly{
    int cf;
    int px,py,pz,flag;
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
        scanf("%d",&cf);
        insertRear(cf,px,py,pz,head);
        printf("Press 1 if you want to continue else 0\n");
        scanf("%d",&num);
    }while(num==1);
    printf("\n");
}

NODE addPoly(NODE h1,NODE h2, NODE h3){
	NODE p1 = h1->next;
    while(p1!=h1){
        int x1 = p1->px,y1 = p1->py,z1 = p1->pz,cf1 = p1->cf;
        NODE p2 = h2->next;
        while(p2!=h2){
            int x2 = p2->px,y2=p2->py,z2 = p2->pz,cf2 = p2->cf;
            if(x1==x2 && y1==y2 && z1==z2){
                break;
            }
            p2 = p2->next;
        }
        if(p2!=h2){
            p2->flag = 1;
            insertRear(cf1+p2->cf ,x1,y1,z1,h3);
        }
        else{
            insertRear(cf1,x1,y1,z1,h1);
        }
        p1 = p1->next;
    }
    NODE p2 = h2->next;
    while(p2!=h2){
        if(p2->flag != 1){
            insertRear(p2->cf,p2->px,p2->py,p2->pz,h3);
        }
    }
    return h3;
}

void evaluate(NODE h1){
    int x,y,z,result=0;
    NODE p1 = h1->next;
    printf("Enter the values of x, y, z respectively\n");
    scanf("%d%d%d",&x,&y,&z);
    while(p1!=h1){
        result+=(p1->cf*pow(x,p1->px)*pow(y,p1->py)*pow(z,p1->pz));
        p1 = p1->next;
    }
    printf("The value is %d",result);
}

void main(){
    NODE h1,h2,h3,h;
    h1=getnode();
    h2=getnode();
    h3=getnode();
    h=getnode();
    h1->next = h1;
    h2->next = h2;
    h3->next=h3;
    h->next = h;
    int ch,x,y,z,cf;
    for(;;){
        printf("Enter the option\n");
        printf("1.Read Polynomial 2.Insert Polynomial 3. Display 4.Add polynomial 5.Evaluate\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: readPoly(h);
                    break;
            case 2:printf("Enter the coefficient, x value, y value, z value\n");
                    scanf("%d%d%d%d",&cf,&x,&y,&z);
                    insertRear(cf,x,y,z,h);
                    break;
            case 3: display(h);
                    break;
            case 4:printf("Read the first polynomial\n\n");
                    readPoly(h1);
                    printf("Read the second polynomial\n\n");
                    readPoly(h2);
                    h3 = addPoly(h1,h2,h3);
                    display(h3);
                    break;
            case 5:evaluate(h);
                    break;
            default:
                    exit(0);
        }
    }
}