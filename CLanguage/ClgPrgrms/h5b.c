#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void tower(int n, char source, char temp,char destination){
	if(n==0)
		return;
	tower(n-1,source,destination,temp);
	printf("Move %d from %c to %c\n",n,source,destination);
	tower(n-1,temp,source,destination);
}
void main(){
	tower(3,'A','B','C');
	printf("Total number of moves are %d",(int)pow(2,2));
}
