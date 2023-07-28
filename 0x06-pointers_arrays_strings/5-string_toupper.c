#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to uppercase
 * Return: nothing.
 */
char *string_toupper(char *str)
{
	int i;
	int c;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = (int) str[i];
		if ((c < 97) | (c > 122))
			continue;
		str[i] = (char) (c - 32);
	}

	return (str);
}
