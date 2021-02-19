#include<stdio.h>
#include<stdlib.h>
int count = 0,key[20];
int *ht,indx,n,m;

void insert(int key){
    indx = key%m;
    while(ht[indx] != -1){
        indx = (indx+1)%m;
    }
    ht[indx] = key;
    count++;
}

void display(){
    if(count==0){
        printf("Nothing to display\n");
        return;
    }
    for(int i=0;i<m;i++){
        printf("T[%d] => %d\n",i,ht[i]);
    }
}

void main(){
    int i;
    printf("Enter the number of employees\n");
    scanf("%d",&n);
    printf("Enter a two digit memory location (m) for hash node: ");
    scanf("%d",&m);
    ht = (int *)malloc(m*sizeof(int));
    for(i=0;i<m;i++){
        ht[i] = -1;
    }
    printf("Enter the 4 digit keys\n");
    for(i =0; i<n; i++){
        scanf("%d",&key[i]);
    }
    for(i =0 ;i<n;i++){
        if(count==m){
            printf("Hash table is full cannot insert the record\n");
            break;
        }
        insert(key[i]);
    }
    display();
}