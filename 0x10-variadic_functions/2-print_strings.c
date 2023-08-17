#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list list;
	char *str;

	if (separator == NULL)
		separator = "";

	va_start(list, n);
	for (count = 0; count < n; count++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		
		if (count < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
