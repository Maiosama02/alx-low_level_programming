#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: numper
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square(n, 1));
}

/**
 * square - returns square root
 * @n: number
 * @i: sq
 * Return: result
 */

int square(int n, int i)
{
	if (i * i == n)
		return (i);
	return (square(n, i + 1));
	if (i * i < n)
		return (-1);
}
