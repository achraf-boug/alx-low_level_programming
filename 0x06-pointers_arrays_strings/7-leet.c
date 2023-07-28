#include "main.h"
/**
 * char *leet - function that encodes a string into 1337
 * @str: string to treat
 * Return: Always 0.
 */
char *leet(char *str)
{
	char s[] = "AaEeOoTtLl";
	int c[] = "4433007711";
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (s[j] != '\0')
		{
			if (str[i] == s[j])
			{
				str[i] = c[j];
				break;
			}
		}
		j = 0;
	}

	return (str);
}
