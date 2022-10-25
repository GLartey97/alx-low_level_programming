#include "main.h"

/**
 * _strlen - length of string
 * @s: string
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (len != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
