#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: 'c program'
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (num > 0)
	{
	ptintf("is positive\n");
	}
	else
	{
	printf("is negative\n");
	}

	if (num == 0)
	{
	printf("is zero\n");
	}
	return (0);
}
