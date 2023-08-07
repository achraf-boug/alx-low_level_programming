#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy of the string given as a parameter
 * @str: string to copy
 * Return: copy of str
 */
char *_strdup(char *str)
{
	int len = 0;
	char *cpy;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	cpy = malloc(len + 1);

	while (len + 1 >= 0)
	{
		cpy[len + 1] = str[len + 1];
		len--;
	}
	return (cpy);
}
