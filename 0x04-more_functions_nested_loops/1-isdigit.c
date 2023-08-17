#include "main.h"

/**
 * _isdigit -  checks for a digit
 * @c: input
 * Return: 1 if digit , 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
