#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: input
 * @av: array
 * Return:  pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
		len++;

		ptr = malloc(sizeof(char) * len);
		if (ptr == NULL)
			return (NULL);
		k = 0;
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				ptr[k] = av[i][j];
				k++;
			}
			ptr[k] = '\n';
			k++;
		}
		ptr[k] = '\0';
		return (ptr);
}

