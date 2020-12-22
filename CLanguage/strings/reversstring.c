#include<stdio.h>
int main(){
	char str1[20],str2[20];
	int i=0,j,length=0;
	printf("Enter the string : ");
	scanf("%s",str1);
	while(str1[i]!='\0'){
		length++;
		i++;
	}
	i=0;
	j=length-1;
	while(str1[i]!='\0'){
		str2[i]=str1[j];
		i++;
		j--;
	}
	printf("The string in the revers order is : %s\n",str2);
}
	
	
