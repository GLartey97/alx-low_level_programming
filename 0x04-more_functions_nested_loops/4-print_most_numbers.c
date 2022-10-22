#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 && i == 4)
		{
			continue;
		}
		_putchar(a++ + '0');
	}
	_putchar('\n');
}
