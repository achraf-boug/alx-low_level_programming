#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of argumuents
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, flag;
	char *str;
	va_list list;

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				flag = 0;
				break;
			case 's':
				flag = 0;
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				flag = 1;
				break;
		}
		if (flag == 0 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
