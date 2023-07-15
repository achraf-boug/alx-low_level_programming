#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void) {

  for (char c = '0'; c < '9'; c++) {
    for (char s = (char)(c + 1); s <= '9'; s++) {
      putchar(c);
      putchar(s);
      if (c != '8') {
        putchar(',');
        putchar(' ');
      }
    }
  }
  putchar('\n');

  return (0);
}

