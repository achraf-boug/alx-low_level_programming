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
	char *str = malloc(sizeof(char) * size);
	unsigned int count = 0;

	if (str == NULL || size == 0)
		return (NULL);

	while (count <= size)
	{
		str[count] = c;
		count++;
	}
	return (str);
}
