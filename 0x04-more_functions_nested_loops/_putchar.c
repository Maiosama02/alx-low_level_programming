#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes c to stdout
 * @c: character to print
 * Return: 1 success , -1 error
 */

int _putchar(chae c)
{
	return (write(1, &c, 1));
}
