#include "main.h"
/**
 * char *_strncpy - copy n element from src to dest
 * @dest: copy to
 * @src: copy from
 * @n: number of characters to copy
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}

	return (dest);
}
