#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
	for (j = 0; j < i; j++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
