#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j, k;

	k = 1;

	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
		if (j < size - k)
		{
			printf(" ");
		}
		else
		{
		printf('#');
		}
	}
	printf('\n');
	k++;
	}
	if (size <= 0)
	{
		printf('\n');
	}
}
