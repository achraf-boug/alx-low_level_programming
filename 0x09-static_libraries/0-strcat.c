#include "main.h"
/**
 * char *_strcat - appends the src string to the dest string
 * @dest: append to
 * @src: copy from
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
