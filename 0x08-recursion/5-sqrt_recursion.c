#include "main.h"

/**
 * _sqrt_recursion - square roots
 * @n: integer
 * Return: results
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - square root
 * @n: integer
 * @i: iterator
 * Return: integer
 */

int _sqrt(int n, int i)
{
	int sq = i * i;

	if (sq > n)
		return (-1);
	if (sq == n)
		return (i);
	return (_sqrt(n, i + 1));
}
