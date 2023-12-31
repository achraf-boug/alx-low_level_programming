#include "variadic_functions.h"

/**
 * print_numbers - function that pronts numbers
 * @separator: string
 * @n: size of args
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list list;

	if (separator == NULL)
		separator = "";

	va_start(list, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(list, int));
		if (count < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
