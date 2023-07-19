#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int a, b;

	if (n == 0 || n > 15 )
	{
		n = -1;
	}

	for (a = 0; a <= n; a++)
	{
		putchar('0');
		for (b = 1; b <= n; b++)
		{
			putchar(',');
			putchar(' ');
			if ((a * b) >= 100)
			{
				putchar(((a * b) / 100) + '0');
				putchar((((a * b) % 100) / 10) + '0');
			}
			else if ((a * b) >= 10)
			{
				putchar(' ');
				putchar(((a * b) / 10) + '0');
			}
			else
			{
				putchar(' ');
				putchar(' ');
			}
			putchar((a * b) % 10 + '0');
		}
		putchar('\n');
	}
}

