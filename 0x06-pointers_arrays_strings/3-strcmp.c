#include "main.h"
/**
 *_strcmp - compare two strings
 *@s1: first input
 *@s2: second input
 *
 *Return: s1[i] - s2[j]
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while (s1[i] != '\0' & s2[i] != '\0')
	{
		diff = (int) s1[i] - (int) s2[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	diff = (int) s1[i] - (int) s2[i];

	return (diff);
}

