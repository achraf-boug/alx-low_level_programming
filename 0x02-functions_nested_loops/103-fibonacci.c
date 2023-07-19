#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	long prev = 1, last = 1, sum = 0, sumeven = 0;
	
	while (sum < 4000000)
	{
		sum = last + prev;
		prev = last;
		last = sum;
		if (sum % 2 == 0)
			sumeven += sum;
	}
	printf("%ld\n", sumeven);

	return (0);
}

