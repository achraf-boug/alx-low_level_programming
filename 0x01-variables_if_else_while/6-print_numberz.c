#include <stdio.h>

/**
 *main -> assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		putchar(c + '0');

	putchar('\n');

	return (0);
}

