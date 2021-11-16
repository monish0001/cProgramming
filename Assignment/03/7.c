/*7. The length and breadth of a rectangle and radius of a circle are input through the keyboard. Write
a program in C to calculate the area & perimeter of the rectangle, and the area & circumference
of the circle.*/

#include<stdio.h>
int main(){
    printf("\n This is program to calculate area and parameter of rectangle and circle !\n");
    float hight,width,radius;
    printf("\nPlease enter Hight of Rectangle : ");
    scanf("%f",&hight);
    //taking input height of rectange 
    printf("\nPlease enter Width of Rectangle : ");
    scanf("%f",&width);
    //taking input Radius of rectange 
    printf("\nPlease enter Radius of Circle : ");
    scanf("%f",&radius);
    //taking input Radius of rectange 
    printf("\nArea of rectangle is %f and Parameter of rectangle is : %f ",hight*width,2*(hight+width));
    //calculating area and parameter of rectangle i.e. hight*width and 2(hight+width)
    printf("\nArea of Circle is %f and Parameter of Circle is : %f ",3.14*radius*radius,2*3.14*radius);
    //calculating area and parameter of Circle
    printf("\n\n");
}