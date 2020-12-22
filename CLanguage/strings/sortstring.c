#include<stdio.h>
#include<string.h>
int main(){
	char str[20],temp;
	int i,j,n;
	printf("Enter the string : ");
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(str[i]>str[j]){
				temp=str[j];
				str[j]=str[i];
				str[i]=temp;
			}
		}
	}
	printf("The string after sorting is %s\n",str);
}
