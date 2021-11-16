#include<stdio.h>
int main()
{
    int num;
    printf("Please Enter a number: ");
    scanf("%d", &num);
    if(num%2 == 0)
        printf("\nIt's an even number\n\n");
    else
        printf("\nIt's an odd number\n\n");
    return 0;
}