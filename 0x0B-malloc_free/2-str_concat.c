#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int size1, size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = size2 = 0;
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	conct = malloc(size1 + size2 + 1);

	if (conct == NULL)
		return (NULL);
	size2 = size1 = 0;
	while (s1[size1] != '\0')
	{
		conct[size1] = s1[size1];
		size1++;
	}

	while (s2[size2] != '\0')
	{
		conct[size1] = s2[size2];
		size1++, size2++;
	}
	conct[size1] = '\0';
	return (conct);
}
