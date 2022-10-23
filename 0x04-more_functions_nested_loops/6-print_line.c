#include "main.h"

/**
 * print_line - print a straight line
 * @n: number of lines to be printed
 * Return: Always 0
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
