#include "main.h"

/**
 * is_prime_number - checks for prime numbers
 * @n: number
 * Return: 1 if priime number , 0 otherwise
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 0)
	{
		return (0);
	}
	if (n == 1 || n == 0)
	{
		return (0);
	}
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (is_prime_number(n));
}
