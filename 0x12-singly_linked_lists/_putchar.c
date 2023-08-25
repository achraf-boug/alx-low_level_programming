#include "lists.h"
#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: character to be printed
 *
 * Return: Return 1 if printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
