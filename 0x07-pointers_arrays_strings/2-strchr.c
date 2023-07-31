#include "main.h"
/**
 * _strchr - Entry point
 * @s: string where to search
 * @c: charcter to find
 * Return: Always 0 (failure)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}

