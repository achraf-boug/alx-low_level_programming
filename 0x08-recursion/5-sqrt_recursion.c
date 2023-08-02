#include "main.h"
/**
 * isSquareRoot - function that checks if a is square root of b
 * @a: integer
 * @b: integer
 * Return: integer
 */
int isSquareRoot(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	else
		return (isSquareRoot(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (isSquareRoot(2, n));
}
