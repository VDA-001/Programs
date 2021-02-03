#include<stdio.h>
#include<stdlib.h>

void create(int arr[], int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int insertAtPos(int data,int pos, int arr[], int n){
    if(pos<=0 || pos >n){
        printf("Given position is not valid\n");
        return 0;
    }
    for(int i = n-1;i>=0;i--){
        arr[i+1] = arr[i];
        if(i == pos){
            arr[i] = data;
            break;
        }
    }
    return n+1;
}

int deleteAtPos(int n,int pos, int arr[]){
    if(pos<0 || pos>=n){
        printf("Enter a valid position\n");
    }
    for(int i=pos;i<n;i++){
        arr[i] = arr[i+1];
    }
    return n-1;
}

void main(){
    int arr[20], n,ch,pos;

    for(;;){
        printf("Menu\n");
        printf("1. Create 2. Display 3. Insert at position 4. Delete At Position 5.exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("Enter the number of elements you want to insert\n");
                    scanf("%d",&n);
                    create(arr, n);
                    break;
            case 2:
                    display(arr, n);
                    break;
            case 3:
                    printf("Enter the element to be inserted\n");
                    int data;
                    scanf("%d",&data);
                    printf("Enter the position of insertion\n");
                    scanf("%d",&pos);
                    n=insertAtPos(data, pos, arr, n);
                    break;
            case 4:
                    printf("Enter the position of deletion\n");
                    scanf("%d",&pos);
                    n = deleteAtPos(n,pos, arr);
                    break;
            case 5:
                    exit(0);
            default:
            exit(0);
        }
    }
}