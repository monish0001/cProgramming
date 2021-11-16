#include<stdio.h>
int main(){
    int num1;
    float num2;
    printf("\n Some of the statement here which will show different type of outputs \n");

   printf("\nPlease Enter A Integer Type Number :"); 
   scanf("%d",&num1);
   printf("\nPlease Enter A Float Type Number :");
   scanf("%f",&num2);

   printf("\n\t\t Numbers entered by you  %d and %f",num1,num2);
   printf("\n");
    printf("\n output for integers\n"); 
    printf("|%d|",num1);
    printf("|%2d|",num1);
    printf("|%8d|",num1);
    printf("|%-8d|",num1);
      printf("\n");
    printf("\n output for Float\n"); 
    printf("|%-1.2f|",num2);
    printf("|%-4.2f|",num2);
    printf("|%-8.2f|",num2);
    printf("|%10.3f|",num2);
    
    return 0;
}