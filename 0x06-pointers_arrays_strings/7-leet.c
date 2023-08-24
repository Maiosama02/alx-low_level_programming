#include "main.h"

/**
 * leet - encode a string
 * @s: input
 * Return: s
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (s[i] != '\0')
	{
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
