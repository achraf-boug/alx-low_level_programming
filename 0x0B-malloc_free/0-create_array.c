#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it
 * @size: size of the array
 * @c: char to initialize the string
 * Return: pointer to array or NULL
 **/
char *create_array(unsigned int size, char c)
{
	char *str = malloc(sizeof(char) * (size + 1));

	if (size == 0)
		return (0);

	str[0] = c;
	str[size+1] = '\0';
	while (size > 0)
	{
		str[size] = c;
		size = size - 1;
	}
	return (str);
}
