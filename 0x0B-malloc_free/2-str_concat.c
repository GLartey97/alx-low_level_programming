#include "main.h"

/**
 * _strlen - string length
 * @s: string
 * Return: 1
 */

int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *Return: concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);
	dest = (char *) malloc(size * sizeof(char));

	if (dest == 0)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(dest + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dest + i) = *(s2 + j);
		i++;
	}
	return (dest);
}
