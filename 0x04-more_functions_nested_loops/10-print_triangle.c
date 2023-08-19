#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
		if (j < size -m)
		{
			_putchar(" ");
		}
		else
		{
		_putchar('#');
		}
	}
	_putchar('\n');
	m++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
