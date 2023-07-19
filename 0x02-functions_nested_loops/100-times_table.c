#include "main.h"

/**
 * times_table - prints the n times table, starting with 0
 */
void print_times_table(int n)
{
	int a, b;

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

