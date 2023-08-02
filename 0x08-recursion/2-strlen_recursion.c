#include "main.h"
/**
 * _strlen_recursion - returns the lenght of a string
 * @s : string to mesure
 * Return:integer
 */
int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
