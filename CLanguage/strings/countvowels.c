#include<stdio.h>
int main(){
	char s[20];
	printf("Enter the string\n");
	scanf("%s",s);
	int i=0,vowels=0,consonants=0;
	while(s[i++]!='\0'){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			vowels++;
		else
			consonants++;
	}
	printf("'%s' contains %d vowels and %d consonants.\n",s,vowels,consonants);
	return 0;
}
