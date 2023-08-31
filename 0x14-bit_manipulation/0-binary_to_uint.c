#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string of 0 and 1
 *
 * Return: Converted Number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		if (b[i] != '1' && b[i] != '0')
			return (0);

	for (i = 0; b[i] != '\0'; i++)
		result = result * 2 + ((b[i] == '0') ? 0 : 1);

	return (result);
}
