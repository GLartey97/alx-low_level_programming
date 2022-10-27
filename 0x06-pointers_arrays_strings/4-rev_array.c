#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: size
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		n--;
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
