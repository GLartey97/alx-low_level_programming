#include "main.h"

/**
 * is_prime_number - prints prime numbers
 * @n: integer
 * Return: 1 if prime number else 0
 */

int is_prime_number(int n)
{
	return (prime_check(n, 1));
}

/**
 * prime_check - checks for prime numbers
 * @n: integer
 * @i: iterator
 * Return: 1 or 0
 */

int prime_check(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (prime_check(n, i + 1));
}
