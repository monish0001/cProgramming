#include<stdio.h>
int main(){
	int num;
	printf("\nPls enter a number :");
	scanf("%d",&num);
	if(num<100){
	printf("Number is less then 100");
	}
	else if(num==100){
	printf("Number is equal to 100");
	}
	else{
	printf("Number is grater Than 100");
	}
	return 0;
}
