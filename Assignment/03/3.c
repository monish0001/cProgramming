/*3. Rajesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic
salary, and house rent allowance is 20% of basic salary. Write a program in C to calculate
his gross salary.*/
#include<stdio.h>

int main(){
    int t;
    float basicSalary,grosSgalary,HRA,DA;
    printf("\nPlease inter Rajesh’s basic salary : ");
    //taking input Rajesh’s basic salary 
    scanf("%f",&basicSalary);
    //read and store in varible 
    HRA=basicSalary*.20;
    //calculate HRA
    DA=basicSalary*.40;
    //calculate DA
    grosSgalary=basicSalary+HRA+DA;
    //calculating grosSgalary
    printf("\nRajesh’s Gross Salary : %f\n\n",grosSgalary);
    //final output here
    return 0;
}