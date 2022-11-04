#include "main.h"

/**
 * _pow_recursion - prints a value raised to the power
 * @x: int value
 * @y: int exponent
 * Return: if y less than 0 -1 else pow
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
