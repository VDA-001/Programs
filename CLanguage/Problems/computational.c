#include<stdio.h>
#include<math.h>
int main(){
int a,b,sum,mul,div,dif;
printf("Enter the first number : ");
scanf("%d",&a);
printf("Enter the second number : ");
scanf("%d",&b);
sum=a+b;
dif=a-b;
div=a/b;
mul=a*b;
printf("Sum = %d \nDifference = %d \nProduct = %d \nQuotient = %d\n",sum,dif,mul,div);
}
