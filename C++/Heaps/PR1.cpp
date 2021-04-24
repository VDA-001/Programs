#include<iostream>
#include<iomanip>
using namespace std;
struct Heap{
	int *array;
	int count;
	int capacity;
	int heap_type;
};

struct Heap* h=(struct Heap*)malloc(sizeof(struct Heap));

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

int parentNode(int i){
	if(i<=0 || i>=h->count){
		return -1;
	}
	return (i-1)/2;
}

int leftChild(int i){
	int left = 2*i+1;
	if(left>=h->count){
		return -1;
	}
	return left;
}

int rightChild(int i){
	int right = 2*i+2;
	if(right>=h->count){
		return -1;
	}
	return right;
}

void percolateDown( int i){
	int l,r,temp,max;
	l=leftChild(i);
	r=rightChild(i);
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
		percolateDown(max);
	}
}

int Delete(){
	int data;
	if(h->array[h->count-1]==0)
		return -1;
	data = h->array[0];
	h->array[0]=h->array[h->count-1];
	h->count--;
	percolateDown(0);
	return data;
}

void resizeHeap();

void Insert(int data){
	int i;
	if(h->count==h->capacity){
		resizeHeap();
	}
	h->count++;
	i=h->count-1;
	while(i>=0 && data>h->array[(i-1)/2]){
		h->array[i]=h->array[(i-1)/2];
		i=(i-1)/2;
	}
	h->array[i] = data;
}

void resizeHeap(){
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
	int ch,capacity,data,heap_type;
	while(1){
		cout<<"1.Create 2.Insert 3.Delete \n";
		cin>>ch;
		switch(ch){
			case 1:cout<<"Enter the capacity of heaps\n";
			       cin>>capacity;
			       cout<<"Enter the type of heap\n";
			       cin>>heap_type;
			       h = createHeap(capacity,heap_type);
			       break;
			case 2:cout<<"Enter the data to be inserted\n";
			       cin>>data;
			       Insert(data);
			       break;
			case 3:data = Delete();
			       cout<<"Deleted element is "<<data;
			       break;
			default:exit(0);
		}
			
	}
	return 0;
}
