#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if true 0 if false
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[1] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
