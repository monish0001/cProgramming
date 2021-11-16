//9. WAP to swap two variables without using 3 rd variable.
#include<stdio.h>
int main(){
    int a,b;
    printf("\nPlease Enter Integer Value of A : ");
    scanf("%d",&a);
    printf("\nPlease Enter Integer Value of B : ");
    scanf("%d",&b);
    printf("\nValue Entered By you A = %d  & B = %d \n",a,b);
    a=a+b-(b=a);
    printf("\nAfter Swaping value of A = %d  & B = %d \n",a,b);

}