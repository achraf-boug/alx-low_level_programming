#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	long a, prev = 1, last = 1, sum = 0;
	
	printf("%d, ",1);
	for (a = 1; a < 49; a++)
	{
		sum = last + prev;
		prev = last;
		last = sum;
		printf("%ld, ",sum);
	}
	printf("%ld\n", last + prev);

	return (0);
}

