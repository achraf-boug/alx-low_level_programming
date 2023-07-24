#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (*src != '\0')
	{
		len++;
		src++;
	}
	for ( i = 0 ; i < len ; len++)
	{
		dest[i] = src[i];
	}
	dest[l] = '\0';
	return (dest);
}

