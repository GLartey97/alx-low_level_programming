#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes to allocate
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
