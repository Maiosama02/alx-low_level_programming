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
	char c = 'a';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	c = 'A';

	while (c <= 'Z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
