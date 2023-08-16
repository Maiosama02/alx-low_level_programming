#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float totalsum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			totalsum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", totalsum);
	return (0);
}
