/*6. Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program
to convert this temperature into Centigrade degrees.*/

#include<stdio.h>
void main()
{
    float celsius,fahrenheit;
    printf("\nEnter temperature in Fahrenheit:");
    //taking temperature input from user in Fahrenheit
    scanf("%f",&fahrenheit);
    //storing value
    celsius=(fahrenheit - 32)*5/9;
    //converting in celsius
     printf("%.4f Celsius = %.4f Fahrenheit \n", celsius, fahrenheit);
}