#include<stdio.h>
#include<math.h>
int main(){
	int ar[100],ele,low=0,high,n,mid,found=0;
	printf("Enter the number of elements of array : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	printf("Enter the element to be searched : ");
	scanf("%d",&ele);
	high=n-1;
	
	while(low<=high){
		mid=(high+low)/2;
		if(ar[mid]==ele){
			found=1;
			break;}
		else if(mid>ele){
			high=mid-1;
			}
		else{
			low=mid+1;
			}
		}
	if(found==1){
		printf("The search element %d is present in the location %d\n",ele,mid+1);
	}
	else{
		printf("Invalid Input\n");
	}
}
			
		
