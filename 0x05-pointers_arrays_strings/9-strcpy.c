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

	for (i = 0; src[i] != '\0'; i++)
		len++;

	for (i = 0 ; i < len ; len++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}

