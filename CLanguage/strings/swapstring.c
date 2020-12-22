#include<stdio.h>
int main(){
	char str1[20],str2[20],ch;
	printf("Enter the two strings\n");
	scanf("%s",str1);
	scanf("%s",str2);
	int index=0;
	printf("Before Swapping - \n");
	printf("Value of str1 - %s \n",str1);
	printf("Value of str2 - %s \n",str2);
	while(str1[index]!='\0'){
		ch=str1[index];
		str1[index]=str2[index];
		str2[index]=ch;
		index++;
	}
	printf("After Swapping - \n");
	printf("Value of str1 - %s\nValue of str2 - %s\n",str1,str2);
	return 0;
}
