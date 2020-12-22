#include<stdio.h>
#include<math.h>
int main(){
	int unit;
	float tot;
	char name[10];
	printf("Enter the name and unit consumed\n");
	scanf("%s%d",name,&unit);
	if(unit<=200){
		tot=unit*0.80+100;
	}
	else if(unit<=300){
		tot=(unit-200)*0.90+260;
	}
	else{
		tot=(unit-300)+350;
	}
	if(tot>400){
		tot=tot+(tot*0.15);
	}
	printf("The total amount for units consumed by %s is %f\n",name,tot);
}
