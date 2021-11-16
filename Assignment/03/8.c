/*8. Two numbers are input through the keyboard into two locations A and B. Write a program in C
to interchange the contents of A and B. */

#include<stdio.h>
int main(){
	
	int a,b,temp;
    printf("\nPlease Enter Integer Value of A : ");
    scanf("%d",&a);
    printf("\nPlease Enter Integer Value of B : ");
    scanf("%d",&b);
    printf("\nValue Entered By you A = %d  & B = %d \n",a,b);
    temp=a;
    //storing vlaue of a in temp variable
	a=b;
    //transfring value of a in b
	b=temp;
    //storing value of temp in b
    printf("\nAfter Swaping value of A = %d  & B = %d \n",a,b);
    //display the result afer swaping
	return 0;
}