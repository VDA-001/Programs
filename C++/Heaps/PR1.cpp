#include<iostream>
#include<iomanip>
using namespace std;
struct Heap{
	int *array;
	int count;
	int capacity;
	int heap_type;
};

struct Heap* head=(struct Heap*)malloc(sizeof(struct Heap));

struct Heap * createHeap(int capacity, int heap_type){
	struct Heap* temp = (struct Heap*)malloc(sizeof(struct Heap));
	temp->count=0;
	temp->capacity=capacity;
	temp->heap_type=heap_type;
	temp->array = (int *)malloc(capacity*sizeof(int));
	if(temp->array==NULL){
		cout<<"Memory Error\n";
	}
	return temp;
}

int main(){
	return 0;
}
