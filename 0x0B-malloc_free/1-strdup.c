#include "main.h"

/**
 * _strlen - length of string
 * @s: String
 * Return: length
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
 * _strcpy - copy strings
 * @src: source
 * @dest: destination
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - prints string
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *dest;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	dest = (char *) malloc(size * sizeof(char));

	if (dest == 0)
	{
		return (NULL);
	}
	_strcpy(dest, str);
	return (dest);
}
