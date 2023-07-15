#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void) {

	char c,s,k;
	for(c = '0'; c <= '7'; c++) {
		for(s = (char)(c + 1); s <= '8'; s++) {
			for(k = (char) (s+1); k <= '9'; k++){
				putchar(c);
				putchar(s);
				putchar(k);
				if (c != '7') {
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

