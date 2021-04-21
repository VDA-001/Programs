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

int parentNode(struct Heap* h,int i){
	if(i<=0 || i>=h->count){
		return -1;
	}
	return (i-1)/2;
}

int leftChild(struct Heap* h,int i){
	int left = 2*i+1;
	if(left>=h->count){
		return -1;
	}
	return left;
}

int rightChild(struct Heap* h, int i){
	int right = 2*i+2;
	if(right>=h->count){
		return -1;
	}
	return right;
}

void percolateDown(struct Heap*h, int i){
	int l,r,temp,max;
	l=leftChild(h,i);
	r=rightChild(h,i);
	if(l!=-1 && h->array[i]<h->array[l]){
		max =l;
	}else
		max = i;
	if(r!=-1 && h->array[max]<h->array[r])
		max = r;
	if(max!=i){
		temp = h->array[max];
		h->array[max]=h->array[i];
		h->array[i]=temp;
		percolateDown(h,max);
	}
}

int Delete(struct Heap * h){
	int data;
	if(h->array[h->count-1]==0)
		return -1;
	data = h->array[0];
	h->array[0]=h->array[h->count-1];
	h->count--;
	percolateDown(h,0);
	return data;
}

void resizeHeap(struct Heap* h);

void Insert(struct Heap* h,int data){
	int i;
	if(h->count==h->capacity){
		resizeHeap(h);
	}
	h->count++;
	i=h->count-1;
	while(i>=0 && data>h->array[(i-1)/2]){
		h->array[i]=h->array[(i-1)/2];
		i=(i-1)/2;
	}
	h->array[i] = data;
}

void resizeHeap(struct Heap* h){
	int *array=h->array;
	h->array = (int *)malloc(sizeof(int)*h->capacity*2);
	if(h->array==NULL){
		cout<<"Memory error"<<endl;
		return;
	}
	for(int i=0;i<h->count;i++){
		h->array[i]=array[i];
	}
	h->capacity*=2;
}

int main(){
	return 0;
}
