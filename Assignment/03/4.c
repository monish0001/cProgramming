/*4. The distance between two cities (in Km) is input through the keyboard. Write a program
to convert and print this distance in meters, feet, inches and centimeters. */
#include<stdio.h>
int main(){
    float distance;
    printf("\nPlease inter distance between in Kilometers : ");
    //taking input from user distance in kilometers
    scanf("%f",&distance);
    //store value in distance variable
    printf("\nDistance in meters :%f",distance*1000);
    //convert distance in meter
    printf("\nDistance in feet :%f",distance*3280.84);
     //convert distance in feet
    printf("\nDistance in inches : %f",distance*39370.1);
     //convert distance in inches
    printf("\nDistance in centimeters :%f\n",distance*100000);
     //convert distance in centimeters

}