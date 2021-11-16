#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("\n\nEnter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.4f Celsius = %.4f Fahrenheit", celsius, fahrenheit);
    printf("\n");

    return 0;
}