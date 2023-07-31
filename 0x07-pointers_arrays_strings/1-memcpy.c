#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory for storage
 * @src: memory to copy
 * @n: number of bytes to cpy
 *
 * Return: destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; (src[i] != '\0') && (i < n); i++)
		dest[i] = src[i];

	return (dest);
}

