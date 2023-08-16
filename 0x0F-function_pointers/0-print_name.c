#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: string to print
 * @f: function to be applied on the name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	int i;

	f(name);
	for (i = 0; name[i] != '\0'; i++)
		_putchar(name[i]);
	_putchar('\n');
}
