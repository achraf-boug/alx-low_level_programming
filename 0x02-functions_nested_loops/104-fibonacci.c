#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	float a, prev = 1, last = 1, sum = 0;

	printf("%d, ", 1);
	for (a = 1; a < 97; a++)
	{
		sum = last + prev;
		prev = last;
		last = sum;
		printf("%.0f, ", sum);
	}
	printf("%.0f\n", last + prev);
	return (0);
}

