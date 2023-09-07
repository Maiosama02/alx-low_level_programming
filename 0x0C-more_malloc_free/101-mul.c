#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two positive numbers
 * @argc: number
 * @argv: array
 * Return: 0
 */

int main(int argc, char **argv)
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
		printf("0\n");
		return (0);
	}

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
