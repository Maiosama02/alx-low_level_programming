#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: integers
 * @b: integers
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
