#include<stdio.h>
int main(){
int num,fact=1;
printf("\nPls Enter a Number that you want to count factorial :: ");
scanf("%d",&num);
for(int i=1;i<=num;i++){
    fact=(fact*i);
}
printf("Factorial of %d is %d :" ,num,fact);
printf("\n");
return 0;
}
