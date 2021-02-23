#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char str[100],pat[50],rep[50],ans[100];
int i,j,c,m,k,flag=0;
void stringmatch(int a)
{	
	i=m=c=j=0;
	while(str[c]!='\0'){
		if(str[m]==pat[i]){
			i++;m++;
			if(pat[i]=='\0'){
				flag = 1;
				for(k=0;rep[k]!='\0';k++,j++){
					ans[j] = rep[k];
				}
				i=0;
				c=m;
			}
		}
		else{
			ans[j] = str[c];
			c++;
			j++;
			i=0;
			m=c;
		}
	}
	ans[j]='\0';
}

void main()
{
	printf("\nEnter a main strign\n");
	gets(str);
	printf("\nEnter a pattern string\n");
	gets(pat);
	printf("\nEnter a replace string\n");
	gets(rep);
	int a=strlen(pat);
	stringmatch(a);
	if(flag==1)
	printf("\nThe resultant string is : %s\n\n",ans);
	else
	printf("\nPattern string not found\n");
}

