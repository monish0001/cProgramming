#include<stdio.h>
int main(){
    int choice,num1,num2,result;
    printf("\n\t This is a simple calculator! \n");
    printf("\nPlease Enter First Number :");
    scanf("%d",&num1);
    printf("\nPlease Enter Second Number :");
    scanf("%d",&num2);
    printf("\n\n\t\t Menu Section !!\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division");
    printf("\nPlease Enter Your Choice :");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("\nYour Selected Operation is Sum !!\n");
                result=num1+num2;
                printf("Sum of %d and %d is : %d ", num1,num2,result);
                printf("\n");
                  break;
        case 2: printf("\nYour Selected Operation is Substraction !!\n");
                result=num1-num2;
                printf("Substraction of %d and %d is : %d ", num1,num2,result);
                printf("\n");
                  break;
        case 3: printf("\nYour Selected Operation is Multiplication !!\n");
                result=num1*num2;
                printf("Multiplication of %d and %d is : %d ", num1,num2,result);
                printf("\n");
                  break;
        case 4: printf("\nYour Selected Operation is Division !!\n");
                result=num1/num2;
                printf("Division of %d and %d is : %d ", num1,num2,result);
                printf("\n");
                  break;
        default: printf("\n\nIvalid Choice !!!\n\n");
        printf("\n");
        break;
        
                    
    }
    return 0;
}