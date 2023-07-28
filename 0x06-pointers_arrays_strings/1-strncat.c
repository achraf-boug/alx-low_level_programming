#include "main.h"
/**
 * char *_strncat - appends n element from src string to the dest string
 * @dest: append to
 * @src: copy from
 * @n: number of characters to copy
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; (j < n) & (src[j] != '\0'); j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
