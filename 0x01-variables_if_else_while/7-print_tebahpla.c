#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{

	for (char c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');

	return 0;
}

