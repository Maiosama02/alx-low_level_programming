#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int i, j;

	if (i >= j)
		return (1);
	if (*(s + i) != *(s + j))
		return (0);
	return (is_palindrome(s, i + 1, j - 1));
}
