#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		if (letter == 'e' || c == 'q')
			continue;
		putchar(c);
	}

	putchar('\n');

	return 0;
}

