#include <stdio.h>
int main()
{
	int num1, num2, num3;

	printf("Enter the numbers Number 1, Number 2 and Number 3: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 >= num2 && num1 >= num3)
		printf("%d is the largest number.", num1);
	else if (num2 >= num1 && num2 >= num3)
		printf("%d is the largest number.", num2);
	else if (num3 >= num1 && num2>= num2)
		printf("%d is the largest number.\n\n", num3);
	return 0;
}
