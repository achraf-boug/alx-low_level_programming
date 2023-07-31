#include "main.h"
/**
 * _memset - fill a block of memory
 * @s: memory block
 * @b: desired value
 * @n: number of bytes
 *
 * Return: memory block filled with n bytes valued as b
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}

