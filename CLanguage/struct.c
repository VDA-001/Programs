#include<stdio.h>
#include<stdlib.h>
struct str{
int id;
char name[20];
float marks;
}s;
int main(){
float x;
printf("Enter the name : ");
scanf("%s",s.name);
printf("Enter the marks : ");
scanf("%f",&x);
s.marks=x;
s.id=1;
printf("Details of the student : ");
printf("ID = %d\nName = %s\nMarks = %f\n",s.id,s.name,s.marks);
}
