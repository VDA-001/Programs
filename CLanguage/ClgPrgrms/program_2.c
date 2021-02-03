#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char str[100],pat[50],rep[50],ans[100];
int i,j,c,m,k,flag=0;
void stringmatch(int a)
{	i=m=c=j=0;
	while(str[c]!='\0')
	{
		if(str[m]==pat[i])
		{
			i++;m++;
			if(i>=a-1)
			//if(pat[i]=='\0' )
			{
				printf("\b");
				flag=1;
				for(k=0;rep[k]!='\0';k++,j++)
				ans[j] =rep[k];
				i=0;
				c=m;			
			}
		}
		else
		{
			ans[j]=str[c];
			j++;
			c++;
			m=c;
			i=0;
		}
	}
	ans[j]='\0';
}

void main()
{
	printf("\nEnter a main strign\n");
	fgets(str,100,stdin);
	printf("\nEnter a pattern string\n");
	fgets(pat,50,stdin);
	printf("\nEnter a replace string\n");
	fgets(rep,50,stdin);
	int a=strlen(pat);
	stringmatch(a);
	if(flag==1)
	printf("\nThe resultant string is : %s",ans);
	else
	printf("\nPattern string not found\n");
}

