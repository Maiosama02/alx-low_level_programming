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
	while (i < 10)
	{
	putchar(i + '0');
	i++;
	}
	putchar('\n');
	return (0);
}
