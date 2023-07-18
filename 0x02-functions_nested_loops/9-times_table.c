#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		putchar('0');
		for (b = 1; b < 10; b++)
		{
			putchar(',');
			putchar(' ');

			if ((a * b) >= 10)
				putchar(((a * b) / 10) + '0');
			else
				putchar(' ');

			putchar((a * b) % 10 + '0');
		}
		putchar('\n');
	}
}

