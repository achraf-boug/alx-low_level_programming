#include "main.h"
/**
 * char *leet - function that encodes a string into 1337
 * @str: string to treat
 * Return: Always 0.
 */
char *leet(char *str)
{
	char s[] = "AaEeOoTtLl";
	char c[] = "4433007711";
	int i, j = 0;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[j] == str[i])
				str[i] = c[j];
		}
	}
	return (str);
}
