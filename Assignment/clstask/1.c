#include <stdio.h>
int main()
{
    printf("\n\n This is simple program to the size of integer float double character \n\n");
    printf("Size of int: %lu bytes\n", sizeof(int));
    //sizeof() function return long unsigned int that's why Format Specifiers is lu
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu byte\n", sizeof(float));
    return 0;
}