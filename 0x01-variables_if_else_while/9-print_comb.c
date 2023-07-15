#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{

	int c;

	for (c = 0; c <= 9; c++)
	{	
		putchar(c + '0');
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
