#include <stdio.h>

/**
 * main - Entry point
 * Description:  list all the natural numbers below 10
 * Return: 0
 */

int main(void)
{
	int sum, num;

	for (num = 9; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
