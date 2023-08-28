#include "main.h"

/**
 * *_memset -  fills memory with a constant byte
 * @s: string
 * @b: value
 * @n: number of bytes
 * Return: new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
