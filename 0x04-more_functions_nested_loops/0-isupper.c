#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * Return: 1 if c uppercase , 0 otherwise
 * @c: character
 */

int _isupper(int c)
{

	if (isupper(c))
		return (1);
	else
		return (0);
}
