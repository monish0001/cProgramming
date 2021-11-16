#include<stdio.h>
 
void main()
{
    float celsius,fahrenheit;
    printf("\nEnter temperature in Fahrenheit:");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit - 32)*5/9;
     printf("%.4f Celsius = %.4f Fahrenheit", celsius, fahrenheit);
    printf("\n");
}