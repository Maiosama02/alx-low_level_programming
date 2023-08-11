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
	char c;

	c = 'a';

	while (c <= 'z')
	{
	if (c != 'q' && c != 'e')
	{
		putchar(c);
	}
	c++;
	}
	putchar('\n');
	return (0);
}
