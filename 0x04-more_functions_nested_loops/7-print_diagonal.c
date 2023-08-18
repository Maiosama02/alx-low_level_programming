#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

		for (i = 1; i < n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	if (n <= 0)
		_putchar('\n');
}
