#include<stdio.h>
int main()
{
    int i;
    float mark, sum=0, avg;
    for(i=0; i<6; i++)
    {
         printf("\nPlease inter the subject marks of %d : ",i+1);
        scanf("%f", &mark);
        sum = sum+mark;
    }
    avg = sum/5;
    printf("\nAverage Mark = %0.2f", avg);
    return 0;
}