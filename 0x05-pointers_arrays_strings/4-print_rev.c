#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	for ( i = 0; s[i] != '\0'; i++)
		len++;

	for (i = len; i > -1; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}

