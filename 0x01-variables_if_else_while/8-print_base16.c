#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'c program'
 * Return: always 0
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 16)
	{
	if (i < 10)
	putchar(i + '0');
	else
	putchar(i - 10 + 'a');
	i++;
	}
	putchar('\n');
	return (0);
}
