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
	while (c <= 'z')
	{
	putchar(c - 32);
	c++;
	}
	putchar('\n');
	return (0);
}
