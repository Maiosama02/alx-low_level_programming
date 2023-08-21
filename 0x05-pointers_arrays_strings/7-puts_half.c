#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: nothing
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int start = len / 2;
	int i;

	if (len % 2 == 1)
	{
		start++;
	}

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
