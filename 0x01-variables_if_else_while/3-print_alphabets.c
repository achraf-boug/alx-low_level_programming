#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	for(char c = 'a'; c <= 'z'; c++)
		putchar(c);
	
	for (char c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');

	return 0;
}

