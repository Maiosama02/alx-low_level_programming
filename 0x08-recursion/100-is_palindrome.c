#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0' || strlen(s) == 1)
		return (1);
	if (*s != s[strlen(s) - 1])
		return (0);
	s[strlen(s) - 1] = '\0';
	return (is_palindrome(s + 1));
}
