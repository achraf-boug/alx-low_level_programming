#include "main.h"
/**
 * main - returns file name
 */
void main(void)
{
	char *filename = __FILE__;
	int i;

	for (i = 0; filename[i] != '\0'; i++)
		_putchar(filename[i]);
}
