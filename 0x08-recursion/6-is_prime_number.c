#include "main.h"
/**
 * count_divisors - returns the number of divisors of n
 * @n: number
 * @a: number
 * Return: integer
 */
int count_divisors(int n, int a)
{
	if (a == 0)
		return (0);

	if (n % a == 0)
		return (1 + count_divisors(n, a - 1));
	return (0 + count_divisors(n, a - 1));
}

/**
 *is_prime_number - checks if a number is a prime number
 *@n: number to be checked
 *Return: 1 if true, 0 if false
 */
int is_prime_number(int n)
{
	int count = 0;

	if ((n == 0) || (n == 1))
		return (n);

	count += count_divisors(n, n);

	if (count == 2)
		return (1);
	return (0);
}
