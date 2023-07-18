#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	int a;

	if (n > 98)
		a = -1;
	else
		a = 1;

	while (n != 98)
	{
		printf("%d, ", n);
		n += a;
	}
	printf("%d\n", 98);
}

