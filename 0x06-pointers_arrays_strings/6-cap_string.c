#include "main.h"
#include <string.h>

/**
 *  *cap_string - capitalizes all words of a string
 *  @s: string
 *  Return: s
 */

char *cap_string(char *s)
{
	int i = 0;

	char sep[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (i == 0 || strchr(sep, s[i - 1]))
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}
