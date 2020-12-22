#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int a,b,c;
	float d,x1,x2;
	printf("Enter the values of a,b,c : ");
	scanf("%d%d%d",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if (a==0 && b==0){
		printf("Invalid input\n");
		exit(0);
	}
	else if(a==0){
		x1=-(2*b)/(2*a);
		printf("Root of the equation is %f\n",x1);
	}
	else{
	
		if(d==0){
			x1=(-b)/(2*a);
			x2=x1;
			printf("Roots are equal\n");
			printf("Roots of quadratic equations are %.3f and %.3f\n",x1,x2); 
		}
		else if(d>0){
			x1=((-b)+sqrt(d))/(2*a);
			x2=((-b)-sqrt(d))/(2*a);
			printf("Roots are distinct\n");
			printf("Roots of quadratic equations are %.3f and %.3f\n",x1,x2); 
		}
		else{
			x1=(-b)/(2*a);
			x2=sqrt(fabs(d))/(2*a);
			printf("Roots are Imaginary\n");
			printf("Roots of quadratic equations are %.3f+i%.3f and %.3f-i%.3f\n",x1,x2,x1,x2); 
		}
	}
}
	
	
		
