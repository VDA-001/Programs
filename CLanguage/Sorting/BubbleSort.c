#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int data[],int size){
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(data[j]>data[j+1]){
                temp = data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    printf("Sorted array is : ");
    for( int i=0;i<size;i++){
        printf("%d  ",data[i]);
    }
    printf("\n");
}

void BubbleSortImproved(int data[],int size){
    int temp,swapped = 0;
    for(int i=0;i<size-1;i++){
        swapped=0;
        for(int j=0;j<size-i-1;j++){
            if(data[j]>data[j+1]){
                temp = data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
                swapped = 1;
            }
        }
        if(swapped == 0){
            break;
        }
    }
    printf("Sorted array is : ");
    for( int i=0;i<size;i++){
        printf("%d  ",data[i]);
    }
    printf("\n");
}

void main(){
    int arr[50],size;
    printf("Enter the array size\n");
    scanf("%d",&size);
    printf("Enter the array\n");
    for(int j=0;j<size;j++){
        scanf("%d",&arr[j]);
    }
    BubbleSort(arr,size);
    BubbleSortImproved(arr,size);
}