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

	if (n == 0)
		return;

	va_start(list, n);

	for (count = 1; count < n; count++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL)
			printf("%s", separator);
	}

	printf("%d\n", va_arg(list, int));
}
