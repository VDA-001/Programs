#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int tower(int n, char source, char temp, char destination){
    if(n==0)
    return 0;
    tower(n-1,source, destination,temp);
    printf("\n Move disk %d from %c to %c\n",n,source,destination);
    tower(n-1,temp, source, destination);
}

void main(){
    int n;
    printf("Enter the number of discs: \n");
    scanf("%d",&n);
    tower(n,'A','B','C');
    printf("\nTotal number of moves are %d \n",(int)pow(2,n)-1);
}