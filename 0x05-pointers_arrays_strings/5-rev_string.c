#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
}
