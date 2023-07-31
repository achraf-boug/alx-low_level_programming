#include "main.h"
/**
 * _strspn - Entry point
 * @s:  where to search
 * @accept: bytes to be counted
 * Return: number of bytes founds
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
		}
		s++;
	}
	return (n);
}

