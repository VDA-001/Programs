#include<stdio.h>
#include<stdlib.h>

char str[100],pat[100],rep[100],ans[100];
int i,j,m,flag,c,k;

void stringmatch(){
	i=j=m=c=k=0;
	while(str[c]!='\0'){
		if(str[m]==pat[i]){
			i++;m++;
			if(pat[i]=='\0'){
				flag=1;
				for(k=0;rep[k]!='\0';k++,j++){
					ans[j]=rep[k];
				}c=m;
				i=0;
			}
		}
		else{
			ans[j]=str[c];
			c++;j++;
			m=c;
			i=0;
		}
	}ans[j]='\0';
}

void main(){
	printf("Enter the string\n");
	gets(str);
	printf("Enter the pattern string\n");
	gets(pat);
	printf("Enter the replace string\n");
	gets(rep);
	stringmatch();
	if(flag==1)
		printf("The string after replacing is %s\n",ans);
	else
		printf("Pattern not found\n");
}
