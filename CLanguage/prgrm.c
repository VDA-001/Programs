#include<stdio.h>
#include<stdlib.h>
void create_array(char a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s", &a[i]);
	}
}
void display_array(char a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%c ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nAddress : %p ",&a[i]);
	}
}
int insert_at_pos(char item,char a[],int n,int pos)
{
	int i;
	if(pos>n||pos<0)
	{
		printf("invalid position\n");
		return n;
	}
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=item;
	return n+1;
}
int delete_at_pos(char a[], int n,int pos)
{
	int i;
	if(pos>=n||pos<0)
	{
		printf("Invalid position\n");
		return n;
	}
	printf("item deleted is %c\n",a[pos]);
	for(i=pos+1;i<n;i++)
	{
		a[i-1]=a[i];
	}
	return n-1;
}
void main()
{
	int choice,n, pos;
	char a[10], item;
	while(1)
	{
		printf("\n.......Menu......\n");
		printf("1.create an array\n 2.display\n 3.Insert at position\n 4.Delete at position\n 5. exit\n");
		printf("Enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the number of elements\n");
				scanf("%d",&n);
				printf("enter %d elements\n",n);
				create_array(a,n);
				break;
			case 2: printf("the contents of the array are\n");
				display_array(a,n);
				break;
			case 3: printf("enter the item to be inserted\n");
				scanf("%s",&item);
				printf("enter the position\n");
				scanf("%d",&pos);
				n=insert_at_pos(item,a,n,pos);
				break;
			case 4: printf("enter the position\n");
				scanf("%d",&pos);
				n=delete_at_pos(a,n,pos);
				break;
			case 5:exit(0);
				break;
			default:printf("invalid choice\n");
				break;
		}
	}
}

